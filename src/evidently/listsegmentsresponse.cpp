// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsegmentsresponse.h"
#include "listsegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListSegmentsResponse
 * \brief The ListSegmentsResponse class provides an interace for Evidently ListSegments responses.
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
 * \sa EvidentlyClient::listSegments
 */

/*!
 * Constructs a ListSegmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSegmentsResponse::ListSegmentsResponse(
        const ListSegmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new ListSegmentsResponsePrivate(this), parent)
{
    setRequest(new ListSegmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSegmentsRequest * ListSegmentsResponse::request() const
{
    Q_D(const ListSegmentsResponse);
    return static_cast<const ListSegmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently ListSegments \a response.
 */
void ListSegmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSegmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::ListSegmentsResponsePrivate
 * \brief The ListSegmentsResponsePrivate class provides private implementation for ListSegmentsResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListSegmentsResponsePrivate object with public implementation \a q.
 */
ListSegmentsResponsePrivate::ListSegmentsResponsePrivate(
    ListSegmentsResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently ListSegments response element from \a xml.
 */
void ListSegmentsResponsePrivate::parseListSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSegmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
