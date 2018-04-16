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

#include "getconfigresponse.h"
#include "getconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::GetConfigResponse
 *
 * \brief The GetConfigResponse class provides an interace for CloudHSM GetConfig responses.
 *
 * \ingroup CloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::getConfig
 */

/*!
 * @brief  Constructs a new GetConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConfigResponse::GetConfigResponse(
        const GetConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new GetConfigResponsePrivate(this), parent)
{
    setRequest(new GetConfigRequest(request));
    setReply(reply);
}

const GetConfigRequest * GetConfigResponse::request() const
{
    Q_D(const GetConfigResponse);
    return static_cast<const GetConfigRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSM GetConfig response.
 *
 * @param  response  Response to parse.
 */
void GetConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetConfigResponsePrivate
 *
 * \brief Private implementation for GetConfigResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConfigResponse instance.
 */
GetConfigResponsePrivate::GetConfigResponsePrivate(
    GetConfigResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSM GetConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConfigResponsePrivate::parseGetConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
