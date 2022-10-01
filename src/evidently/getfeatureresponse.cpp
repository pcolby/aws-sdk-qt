// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfeatureresponse.h"
#include "getfeatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetFeatureResponse
 * \brief The GetFeatureResponse class provides an interace for Evidently GetFeature responses.
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
 * \sa EvidentlyClient::getFeature
 */

/*!
 * Constructs a GetFeatureResponse object for \a reply to \a request, with parent \a parent.
 */
GetFeatureResponse::GetFeatureResponse(
        const GetFeatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new GetFeatureResponsePrivate(this), parent)
{
    setRequest(new GetFeatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFeatureRequest * GetFeatureResponse::request() const
{
    Q_D(const GetFeatureResponse);
    return static_cast<const GetFeatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently GetFeature \a response.
 */
void GetFeatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFeatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::GetFeatureResponsePrivate
 * \brief The GetFeatureResponsePrivate class provides private implementation for GetFeatureResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetFeatureResponsePrivate object with public implementation \a q.
 */
GetFeatureResponsePrivate::GetFeatureResponsePrivate(
    GetFeatureResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently GetFeature response element from \a xml.
 */
void GetFeatureResponsePrivate::parseGetFeatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFeatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
