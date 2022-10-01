// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimentsresponse.h"
#include "listexperimentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListExperimentsResponse
 * \brief The ListExperimentsResponse class provides an interace for Evidently ListExperiments responses.
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
 * \sa EvidentlyClient::listExperiments
 */

/*!
 * Constructs a ListExperimentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperimentsResponse::ListExperimentsResponse(
        const ListExperimentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new ListExperimentsResponsePrivate(this), parent)
{
    setRequest(new ListExperimentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperimentsRequest * ListExperimentsResponse::request() const
{
    Q_D(const ListExperimentsResponse);
    return static_cast<const ListExperimentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently ListExperiments \a response.
 */
void ListExperimentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperimentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::ListExperimentsResponsePrivate
 * \brief The ListExperimentsResponsePrivate class provides private implementation for ListExperimentsResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListExperimentsResponsePrivate object with public implementation \a q.
 */
ListExperimentsResponsePrivate::ListExperimentsResponsePrivate(
    ListExperimentsResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently ListExperiments response element from \a xml.
 */
void ListExperimentsResponsePrivate::parseListExperimentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperimentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
