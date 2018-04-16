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

#include "createresolverresponse.h"
#include "createresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateResolverResponse
 *
 * \brief The CreateResolverResponse class provides an interace for AppSync CreateResolver responses.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createResolver
 */

/*!
 * @brief  Constructs a new CreateResolverResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResolverResponse::CreateResolverResponse(
        const CreateResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateResolverResponsePrivate(this), parent)
{
    setRequest(new CreateResolverRequest(request));
    setReply(reply);
}

const CreateResolverRequest * CreateResolverResponse::request() const
{
    Q_D(const CreateResolverResponse);
    return static_cast<const CreateResolverRequest *>(d->request);
}

/*!
 * @brief  Parse a AppSync CreateResolver response.
 *
 * @param  response  Response to parse.
 */
void CreateResolverResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateResolverResponsePrivate
 *
 * \brief Private implementation for CreateResolverResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateResolverResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResolverResponse instance.
 */
CreateResolverResponsePrivate::CreateResolverResponsePrivate(
    CreateResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppSync CreateResolverResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResolverResponsePrivate::parseCreateResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResolverResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
