// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefeatureresponse.h"
#include "updatefeatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateFeatureResponse
 * \brief The UpdateFeatureResponse class provides an interace for Evidently UpdateFeature responses.
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
 * \sa EvidentlyClient::updateFeature
 */

/*!
 * Constructs a UpdateFeatureResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFeatureResponse::UpdateFeatureResponse(
        const UpdateFeatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new UpdateFeatureResponsePrivate(this), parent)
{
    setRequest(new UpdateFeatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFeatureRequest * UpdateFeatureResponse::request() const
{
    Q_D(const UpdateFeatureResponse);
    return static_cast<const UpdateFeatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently UpdateFeature \a response.
 */
void UpdateFeatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFeatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::UpdateFeatureResponsePrivate
 * \brief The UpdateFeatureResponsePrivate class provides private implementation for UpdateFeatureResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateFeatureResponsePrivate object with public implementation \a q.
 */
UpdateFeatureResponsePrivate::UpdateFeatureResponsePrivate(
    UpdateFeatureResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently UpdateFeature response element from \a xml.
 */
void UpdateFeatureResponsePrivate::parseUpdateFeatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFeatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
