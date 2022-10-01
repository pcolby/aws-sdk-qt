// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputsresponse.h"
#include "listinputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListInputsResponse
 * \brief The ListInputsResponse class provides an interace for IoTEvents ListInputs responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listInputs
 */

/*!
 * Constructs a ListInputsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputsResponse::ListInputsResponse(
        const ListInputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListInputsResponsePrivate(this), parent)
{
    setRequest(new ListInputsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputsRequest * ListInputsResponse::request() const
{
    Q_D(const ListInputsResponse);
    return static_cast<const ListInputsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListInputs \a response.
 */
void ListInputsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListInputsResponsePrivate
 * \brief The ListInputsResponsePrivate class provides private implementation for ListInputsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListInputsResponsePrivate object with public implementation \a q.
 */
ListInputsResponsePrivate::ListInputsResponsePrivate(
    ListInputsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListInputs response element from \a xml.
 */
void ListInputsResponsePrivate::parseListInputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
