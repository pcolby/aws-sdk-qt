// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprojecteventsresponse.h"
#include "putprojecteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::PutProjectEventsResponse
 * \brief The PutProjectEventsResponse class provides an interace for Evidently PutProjectEvents responses.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::putProjectEvents
 */

/*!
 * Constructs a PutProjectEventsResponse object for \a reply to \a request, with parent \a parent.
 */
PutProjectEventsResponse::PutProjectEventsResponse(
        const PutProjectEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new PutProjectEventsResponsePrivate(this), parent)
{
    setRequest(new PutProjectEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutProjectEventsRequest * PutProjectEventsResponse::request() const
{
    Q_D(const PutProjectEventsResponse);
    return static_cast<const PutProjectEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently PutProjectEvents \a response.
 */
void PutProjectEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutProjectEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::PutProjectEventsResponsePrivate
 * \brief The PutProjectEventsResponsePrivate class provides private implementation for PutProjectEventsResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a PutProjectEventsResponsePrivate object with public implementation \a q.
 */
PutProjectEventsResponsePrivate::PutProjectEventsResponsePrivate(
    PutProjectEventsResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently PutProjectEvents response element from \a xml.
 */
void PutProjectEventsResponsePrivate::parsePutProjectEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutProjectEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
