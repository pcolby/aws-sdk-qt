// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdetectormodelversionsresponse.h"
#include "listdetectormodelversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::ListDetectorModelVersionsResponse
 * \brief The ListDetectorModelVersionsResponse class provides an interace for IoTEvents ListDetectorModelVersions responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::listDetectorModelVersions
 */

/*!
 * Constructs a ListDetectorModelVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDetectorModelVersionsResponse::ListDetectorModelVersionsResponse(
        const ListDetectorModelVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new ListDetectorModelVersionsResponsePrivate(this), parent)
{
    setRequest(new ListDetectorModelVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDetectorModelVersionsRequest * ListDetectorModelVersionsResponse::request() const
{
    Q_D(const ListDetectorModelVersionsResponse);
    return static_cast<const ListDetectorModelVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents ListDetectorModelVersions \a response.
 */
void ListDetectorModelVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDetectorModelVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::ListDetectorModelVersionsResponsePrivate
 * \brief The ListDetectorModelVersionsResponsePrivate class provides private implementation for ListDetectorModelVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a ListDetectorModelVersionsResponsePrivate object with public implementation \a q.
 */
ListDetectorModelVersionsResponsePrivate::ListDetectorModelVersionsResponsePrivate(
    ListDetectorModelVersionsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents ListDetectorModelVersions response element from \a xml.
 */
void ListDetectorModelVersionsResponsePrivate::parseListDetectorModelVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDetectorModelVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
