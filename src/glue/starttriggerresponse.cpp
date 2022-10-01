// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttriggerresponse.h"
#include "starttriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartTriggerResponse
 * \brief The StartTriggerResponse class provides an interace for Glue StartTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startTrigger
 */

/*!
 * Constructs a StartTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
StartTriggerResponse::StartTriggerResponse(
        const StartTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartTriggerResponsePrivate(this), parent)
{
    setRequest(new StartTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTriggerRequest * StartTriggerResponse::request() const
{
    Q_D(const StartTriggerResponse);
    return static_cast<const StartTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartTrigger \a response.
 */
void StartTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartTriggerResponsePrivate
 * \brief The StartTriggerResponsePrivate class provides private implementation for StartTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartTriggerResponsePrivate object with public implementation \a q.
 */
StartTriggerResponsePrivate::StartTriggerResponsePrivate(
    StartTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartTrigger response element from \a xml.
 */
void StartTriggerResponsePrivate::parseStartTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
