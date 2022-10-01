// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedetectormodelresponse.h"
#include "deletedetectormodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DeleteDetectorModelResponse
 * \brief The DeleteDetectorModelResponse class provides an interace for IoTEvents DeleteDetectorModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::deleteDetectorModel
 */

/*!
 * Constructs a DeleteDetectorModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDetectorModelResponse::DeleteDetectorModelResponse(
        const DeleteDetectorModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DeleteDetectorModelResponsePrivate(this), parent)
{
    setRequest(new DeleteDetectorModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDetectorModelRequest * DeleteDetectorModelResponse::request() const
{
    Q_D(const DeleteDetectorModelResponse);
    return static_cast<const DeleteDetectorModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DeleteDetectorModel \a response.
 */
void DeleteDetectorModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDetectorModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DeleteDetectorModelResponsePrivate
 * \brief The DeleteDetectorModelResponsePrivate class provides private implementation for DeleteDetectorModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DeleteDetectorModelResponsePrivate object with public implementation \a q.
 */
DeleteDetectorModelResponsePrivate::DeleteDetectorModelResponsePrivate(
    DeleteDetectorModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DeleteDetectorModel response element from \a xml.
 */
void DeleteDetectorModelResponsePrivate::parseDeleteDetectorModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDetectorModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
