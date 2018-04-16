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

#include "listbootstrapactionsresponse.h"
#include "listbootstrapactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListBootstrapActionsResponse
 *
 * \brief The ListBootstrapActionsResponse class encapsulates EMR ListBootstrapActions responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::listBootstrapActions
 */

/*!
 * @brief  Constructs a new ListBootstrapActionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBootstrapActionsResponse::ListBootstrapActionsResponse(
        const ListBootstrapActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListBootstrapActionsResponsePrivate(this), parent)
{
    setRequest(new ListBootstrapActionsRequest(request));
    setReply(reply);
}

const ListBootstrapActionsRequest * ListBootstrapActionsResponse::request() const
{
    Q_D(const ListBootstrapActionsResponse);
    return static_cast<const ListBootstrapActionsRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR ListBootstrapActions response.
 *
 * @param  response  Response to parse.
 */
void ListBootstrapActionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBootstrapActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListBootstrapActionsResponsePrivate
 *
 * \brief Private implementation for ListBootstrapActionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListBootstrapActionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBootstrapActionsResponse instance.
 */
ListBootstrapActionsResponsePrivate::ListBootstrapActionsResponsePrivate(
    ListBootstrapActionsResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR ListBootstrapActionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBootstrapActionsResponsePrivate::parseListBootstrapActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBootstrapActionsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
