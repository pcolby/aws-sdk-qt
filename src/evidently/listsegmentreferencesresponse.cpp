// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsegmentreferencesresponse.h"
#include "listsegmentreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListSegmentReferencesResponse
 * \brief The ListSegmentReferencesResponse class provides an interace for Evidently ListSegmentReferences responses.
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
 * \sa EvidentlyClient::listSegmentReferences
 */

/*!
 * Constructs a ListSegmentReferencesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSegmentReferencesResponse::ListSegmentReferencesResponse(
        const ListSegmentReferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new ListSegmentReferencesResponsePrivate(this), parent)
{
    setRequest(new ListSegmentReferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSegmentReferencesRequest * ListSegmentReferencesResponse::request() const
{
    Q_D(const ListSegmentReferencesResponse);
    return static_cast<const ListSegmentReferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently ListSegmentReferences \a response.
 */
void ListSegmentReferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSegmentReferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::ListSegmentReferencesResponsePrivate
 * \brief The ListSegmentReferencesResponsePrivate class provides private implementation for ListSegmentReferencesResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListSegmentReferencesResponsePrivate object with public implementation \a q.
 */
ListSegmentReferencesResponsePrivate::ListSegmentReferencesResponsePrivate(
    ListSegmentReferencesResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently ListSegmentReferences response element from \a xml.
 */
void ListSegmentReferencesResponsePrivate::parseListSegmentReferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSegmentReferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
