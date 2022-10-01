// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchesresponse.h"
#include "listlaunchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListLaunchesResponse
 * \brief The ListLaunchesResponse class provides an interace for Evidently ListLaunches responses.
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
 * \sa EvidentlyClient::listLaunches
 */

/*!
 * Constructs a ListLaunchesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLaunchesResponse::ListLaunchesResponse(
        const ListLaunchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new ListLaunchesResponsePrivate(this), parent)
{
    setRequest(new ListLaunchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLaunchesRequest * ListLaunchesResponse::request() const
{
    Q_D(const ListLaunchesResponse);
    return static_cast<const ListLaunchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently ListLaunches \a response.
 */
void ListLaunchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLaunchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::ListLaunchesResponsePrivate
 * \brief The ListLaunchesResponsePrivate class provides private implementation for ListLaunchesResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListLaunchesResponsePrivate object with public implementation \a q.
 */
ListLaunchesResponsePrivate::ListLaunchesResponsePrivate(
    ListLaunchesResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently ListLaunches response element from \a xml.
 */
void ListLaunchesResponsePrivate::parseListLaunchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
