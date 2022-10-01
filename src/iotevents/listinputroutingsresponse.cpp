// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputroutingsresponse.h"
#include "listinputroutingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsResponse
 * \brief The ListInputRoutingsResponse class provides an interace for IoTEvents ListInputRoutings responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputRoutings
 */

/*!
 * Constructs a ListInputRoutingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputRoutingsResponse::ListInputRoutingsResponse(
        const ListInputRoutingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListInputRoutingsResponsePrivate(this), parent)
{
    setRequest(new ListInputRoutingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputRoutingsRequest * ListInputRoutingsResponse::request() const
{
    Q_D(const ListInputRoutingsResponse);
    return static_cast<const ListInputRoutingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListInputRoutings \a response.
 */
void ListInputRoutingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputRoutingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListInputRoutingsResponsePrivate
 * \brief The ListInputRoutingsResponsePrivate class provides private implementation for ListInputRoutingsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputRoutingsResponsePrivate object with public implementation \a q.
 */
ListInputRoutingsResponsePrivate::ListInputRoutingsResponsePrivate(
    ListInputRoutingsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListInputRoutings response element from \a xml.
 */
void ListInputRoutingsResponsePrivate::parseListInputRoutingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputRoutingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
