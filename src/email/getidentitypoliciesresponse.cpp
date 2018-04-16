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

#include "getidentitypoliciesresponse.h"
#include "getidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetIdentityPoliciesResponse
 *
 * \brief The GetIdentityPoliciesResponse class encapsulates SES GetIdentityPolicies responses.
 *
 * \ingroup SES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::getIdentityPolicies
 */

/*!
 * @brief  Constructs a new GetIdentityPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityPoliciesResponse::GetIdentityPoliciesResponse(
        const GetIdentityPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetIdentityPoliciesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityPoliciesRequest(request));
    setReply(reply);
}

const GetIdentityPoliciesRequest * GetIdentityPoliciesResponse::request() const
{
    Q_D(const GetIdentityPoliciesResponse);
    return static_cast<const GetIdentityPoliciesRequest *>(d->request);
}

/*!
 * @brief  Parse a SES GetIdentityPolicies response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIdentityPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetIdentityPoliciesResponsePrivate
 *
 * \brief Private implementation for GetIdentityPoliciesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityPoliciesResponse instance.
 */
GetIdentityPoliciesResponsePrivate::GetIdentityPoliciesResponsePrivate(
    GetIdentityPoliciesResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES GetIdentityPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityPoliciesResponsePrivate::parseGetIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityPoliciesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
