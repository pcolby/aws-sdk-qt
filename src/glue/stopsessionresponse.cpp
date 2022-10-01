// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsessionresponse.h"
#include "stopsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopSessionResponse
 * \brief The StopSessionResponse class provides an interace for Glue StopSession responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopSession
 */

/*!
 * Constructs a StopSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StopSessionResponse::StopSessionResponse(
        const StopSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopSessionResponsePrivate(this), parent)
{
    setRequest(new StopSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopSessionRequest * StopSessionResponse::request() const
{
    Q_D(const StopSessionResponse);
    return static_cast<const StopSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopSession \a response.
 */
void StopSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopSessionResponsePrivate
 * \brief The StopSessionResponsePrivate class provides private implementation for StopSessionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopSessionResponsePrivate object with public implementation \a q.
 */
StopSessionResponsePrivate::StopSessionResponsePrivate(
    StopSessionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopSession response element from \a xml.
 */
void StopSessionResponsePrivate::parseStopSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
