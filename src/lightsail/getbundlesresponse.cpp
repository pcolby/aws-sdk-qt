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

#include "getbundlesresponse.h"
#include "getbundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetBundlesResponse
 *
 * \brief The GetBundlesResponse class provides an interace for Lightsail GetBundles responses.
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
 * \sa LightsailClient::getBundles
 */

/*!
 * @brief  Constructs a new GetBundlesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBundlesResponse::GetBundlesResponse(
        const GetBundlesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetBundlesResponsePrivate(this), parent)
{
    setRequest(new GetBundlesRequest(request));
    setReply(reply);
}

const GetBundlesRequest * GetBundlesResponse::request() const
{
    Q_D(const GetBundlesResponse);
    return static_cast<const GetBundlesRequest *>(d->request);
}

/*!
 * @brief  Parse a Lightsail GetBundles response.
 *
 * @param  response  Response to parse.
 */
void GetBundlesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBundlesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetBundlesResponsePrivate
 *
 * \brief Private implementation for GetBundlesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBundlesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBundlesResponse instance.
 */
GetBundlesResponsePrivate::GetBundlesResponsePrivate(
    GetBundlesResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Lightsail GetBundlesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBundlesResponsePrivate::parseGetBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBundlesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
