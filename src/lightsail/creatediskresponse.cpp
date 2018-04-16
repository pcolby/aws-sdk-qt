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

#include "creatediskresponse.h"
#include "creatediskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CreateDiskResponse
 *
 * \brief The CreateDiskResponse class encapsulates Lightsail CreateDisk responses.
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
 * \sa LightsailClient::createDisk
 */

/*!
 * @brief  Constructs a new CreateDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDiskResponse::CreateDiskResponse(
        const CreateDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateDiskResponsePrivate(this), parent)
{
    setRequest(new CreateDiskRequest(request));
    setReply(reply);
}

const CreateDiskRequest * CreateDiskResponse::request() const
{
    Q_D(const CreateDiskResponse);
    return static_cast<const CreateDiskRequest *>(d->request);
}

/*!
 * @brief  Parse a Lightsail CreateDisk response.
 *
 * @param  response  Response to parse.
 */
void CreateDiskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDiskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDiskResponsePrivate
 *
 * \brief Private implementation for CreateDiskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDiskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDiskResponse instance.
 */
CreateDiskResponsePrivate::CreateDiskResponsePrivate(
    CreateDiskResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Lightsail CreateDiskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDiskResponsePrivate::parseCreateDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
