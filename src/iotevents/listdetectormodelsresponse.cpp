// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
