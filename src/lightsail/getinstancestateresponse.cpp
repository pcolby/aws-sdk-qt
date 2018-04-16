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

#include "getinstancestateresponse.h"
#include "getinstancestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetInstanceStateResponse
 *
 * \brief The GetInstanceStateResponse class provides an interace for Lightsail GetInstanceState responses.
 *
 * \ingroup Lightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::getInstanceState
 */

/*!
 * @brief  Constructs a new GetInstanceStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceStateResponse::GetInstanceStateResponse(
        const GetInstanceStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstanceStateResponsePrivate(this), parent)
{
    setRequest(new GetInstanceStateRequest(request));
    setReply(reply);
}

const GetInstanceStateRequest * GetInstanceStateResponse::request() const
{
    Q_D(const GetInstanceStateResponse);
    return static_cast<const GetInstanceStateRequest *>(d->request);
}

/*!
 * @brief  Parse a Lightsail GetInstanceState response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInstanceStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetInstanceStateResponsePrivate
 *
 * \brief Private implementation for GetInstanceStateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetInstanceStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceStateResponse instance.
 */
GetInstanceStateResponsePrivate::GetInstanceStateResponsePrivate(
    GetInstanceStateResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Lightsail GetInstanceStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceStateResponsePrivate::parseGetInstanceStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceStateResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
