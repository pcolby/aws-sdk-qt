// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinputresponse.h"
#include "deleteinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteInputResponse
 * \brief The DeleteInputResponse class provides an interace for IoTEvents DeleteInput responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteInput
 */

/*!
 * Constructs a DeleteInputResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInputResponse::DeleteInputResponse(
        const DeleteInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DeleteInputResponsePrivate(this), parent)
{
    setRequest(new DeleteInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInputRequest * DeleteInputResponse::request() const
{
    Q_D(const DeleteInputResponse);
    return static_cast<const DeleteInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DeleteInput \a response.
 */
void DeleteInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DeleteInputResponsePrivate
 * \brief The DeleteInputResponsePrivate class provides private implementation for DeleteInputResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteInputResponsePrivate object with public implementation \a q.
 */
DeleteInputResponsePrivate::DeleteInputResponsePrivate(
    DeleteInputResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DeleteInput response element from \a xml.
 */
void DeleteInputResponsePrivate::parseDeleteInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
