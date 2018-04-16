/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getpolicyresponse.h"
#include "getpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetPolicyResponse
 *
 * \brief The GetPolicyResponse class encapsulates FMS GetPolicy responses.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::getPolicy
 */

/*!
 * @brief  Constructs a new GetPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPolicyResponse::GetPolicyResponse(
        const GetPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new GetPolicyResponsePrivate(this), parent)
{
    setRequest(new GetPolicyRequest(request));
    setReply(reply);
}

const GetPolicyRequest * GetPolicyResponse::request() const
{
    Q_D(const GetPolicyResponse);
    return static_cast<const GetPolicyRequest *>(d->request);
}

/*!
 * @brief  Parse a FMS GetPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetPolicyResponsePrivate
 *
 * \brief Private implementation for GetPolicyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPolicyResponse instance.
 */
GetPolicyResponsePrivate::GetPolicyResponsePrivate(
    GetPolicyResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an FMS GetPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPolicyResponsePrivate::parseGetPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPolicyResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
