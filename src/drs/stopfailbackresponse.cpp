// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopfailbackresponse.h"
#include "stopfailbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::StopFailbackResponse
 * \brief The StopFailbackResponse class provides an interace for Drs StopFailback responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::stopFailback
 */

/*!
 * Constructs a StopFailbackResponse object for \a reply to \a request, with parent \a parent.
 */
StopFailbackResponse::StopFailbackResponse(
        const StopFailbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new StopFailbackResponsePrivate(this), parent)
{
    setRequest(new StopFailbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopFailbackRequest * StopFailbackResponse::request() const
{
    Q_D(const StopFailbackResponse);
    return static_cast<const StopFailbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs StopFailback \a response.
 */
void StopFailbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopFailbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::StopFailbackResponsePrivate
 * \brief The StopFailbackResponsePrivate class provides private implementation for StopFailbackResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a StopFailbackResponsePrivate object with public implementation \a q.
 */
StopFailbackResponsePrivate::StopFailbackResponsePrivate(
    StopFailbackResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs StopFailback response element from \a xml.
 */
void StopFailbackResponsePrivate::parseStopFailbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFailbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
