/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listdetectormodelsresponse.h"
#include "listdetectormodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListDetectorModelsResponse
 * \brief The ListDetectorModelsResponse class provides an interace for IoTEvents ListDetectorModels responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listDetectorModels
 */

/*!
 * Constructs a ListDetectorModelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDetectorModelsResponse::ListDetectorModelsResponse(
        const ListDetectorModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListDetectorModelsResponsePrivate(this), parent)
{
    setRequest(new ListDetectorModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDetectorModelsRequest * ListDetectorModelsResponse::request() const
{
    Q_D(const ListDetectorModelsResponse);
    return static_cast<const ListDetectorModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListDetectorModels \a response.
 */
void ListDetectorModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDetectorModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListDetectorModelsResponsePrivate
 * \brief The ListDetectorModelsResponsePrivate class provides private implementation for ListDetectorModelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListDetectorModelsResponsePrivate object with public implementation \a q.
 */
ListDetectorModelsResponsePrivate::ListDetectorModelsResponsePrivate(
    ListDetectorModelsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListDetectorModels response element from \a xml.
 */
void ListDetectorModelsResponsePrivate::parseListDetectorModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDetectorModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
