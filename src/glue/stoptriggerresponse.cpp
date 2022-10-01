// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptriggerresponse.h"
#include "stoptriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopTriggerResponse
 * \brief The StopTriggerResponse class provides an interace for Glue StopTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopTrigger
 */

/*!
 * Constructs a StopTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
StopTriggerResponse::StopTriggerResponse(
        const StopTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopTriggerResponsePrivate(this), parent)
{
    setRequest(new StopTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTriggerRequest * StopTriggerResponse::request() const
{
    Q_D(const StopTriggerResponse);
    return static_cast<const StopTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopTrigger \a response.
 */
void StopTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopTriggerResponsePrivate
 * \brief The StopTriggerResponsePrivate class provides private implementation for StopTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopTriggerResponsePrivate object with public implementation \a q.
 */
StopTriggerResponsePrivate::StopTriggerResponsePrivate(
    StopTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopTrigger response element from \a xml.
 */
void StopTriggerResponsePrivate::parseStopTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
