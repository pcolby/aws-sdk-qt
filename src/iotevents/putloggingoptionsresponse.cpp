// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putloggingoptionsresponse.h"
#include "putloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsResponse
 * \brief The PutLoggingOptionsResponse class provides an interace for IoTEvents PutLoggingOptions responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::putLoggingOptions
 */

/*!
 * Constructs a PutLoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutLoggingOptionsResponse::PutLoggingOptionsResponse(
        const PutLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new PutLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new PutLoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLoggingOptionsRequest * PutLoggingOptionsResponse::request() const
{
    Q_D(const PutLoggingOptionsResponse);
    return static_cast<const PutLoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents PutLoggingOptions \a response.
 */
void PutLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::PutLoggingOptionsResponsePrivate
 * \brief The PutLoggingOptionsResponsePrivate class provides private implementation for PutLoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a PutLoggingOptionsResponsePrivate object with public implementation \a q.
 */
PutLoggingOptionsResponsePrivate::PutLoggingOptionsResponsePrivate(
    PutLoggingOptionsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents PutLoggingOptions response element from \a xml.
 */
void PutLoggingOptionsResponsePrivate::parsePutLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
