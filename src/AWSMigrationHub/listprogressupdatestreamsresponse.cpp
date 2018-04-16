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

#include "listprogressupdatestreamsresponse.h"
#include "listprogressupdatestreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsResponse
 *
 * \brief The ListProgressUpdateStreamsResponse class encapsulates MigrationHub ListProgressUpdateStreams responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::listProgressUpdateStreams
 */

/*!
 * @brief  Constructs a new ListProgressUpdateStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListProgressUpdateStreamsResponse::ListProgressUpdateStreamsResponse(
        const ListProgressUpdateStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListProgressUpdateStreamsResponsePrivate(this), parent)
{
    setRequest(new ListProgressUpdateStreamsRequest(request));
    setReply(reply);
}

const ListProgressUpdateStreamsRequest * ListProgressUpdateStreamsResponse::request() const
{
    Q_D(const ListProgressUpdateStreamsResponse);
    return static_cast<const ListProgressUpdateStreamsRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub ListProgressUpdateStreams response.
 *
 * @param  response  Response to parse.
 */
void ListProgressUpdateStreamsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListProgressUpdateStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListProgressUpdateStreamsResponsePrivate
 *
 * \brief Private implementation for ListProgressUpdateStreamsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListProgressUpdateStreamsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListProgressUpdateStreamsResponse instance.
 */
ListProgressUpdateStreamsResponsePrivate::ListProgressUpdateStreamsResponsePrivate(
    ListProgressUpdateStreamsResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub ListProgressUpdateStreamsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListProgressUpdateStreamsResponsePrivate::parseListProgressUpdateStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProgressUpdateStreamsResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
