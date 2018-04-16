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

#include "liststepsresponse.h"
#include "liststepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListStepsResponse
 *
 * \brief The ListStepsResponse class provides an interace for EMR ListSteps responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::listSteps
 */

/*!
 * @brief  Constructs a new ListStepsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStepsResponse::ListStepsResponse(
        const ListStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new ListStepsResponsePrivate(this), parent)
{
    setRequest(new ListStepsRequest(request));
    setReply(reply);
}

const ListStepsRequest * ListStepsResponse::request() const
{
    Q_D(const ListStepsResponse);
    return static_cast<const ListStepsRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR ListSteps response.
 *
 * @param  response  Response to parse.
 */
void ListStepsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListStepsResponsePrivate
 *
 * \brief Private implementation for ListStepsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStepsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStepsResponse instance.
 */
ListStepsResponsePrivate::ListStepsResponsePrivate(
    ListStepsResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR ListStepsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStepsResponsePrivate::parseListStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStepsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
