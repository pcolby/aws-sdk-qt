// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefeatureresponse.h"
#include "deletefeatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteFeatureResponse
 * \brief The DeleteFeatureResponse class provides an interace for Evidently DeleteFeature responses.
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
 * \sa EvidentlyClient::deleteFeature
 */

/*!
 * Constructs a DeleteFeatureResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFeatureResponse::DeleteFeatureResponse(
        const DeleteFeatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new DeleteFeatureResponsePrivate(this), parent)
{
    setRequest(new DeleteFeatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFeatureRequest * DeleteFeatureResponse::request() const
{
    Q_D(const DeleteFeatureResponse);
    return static_cast<const DeleteFeatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently DeleteFeature \a response.
 */
void DeleteFeatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFeatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::DeleteFeatureResponsePrivate
 * \brief The DeleteFeatureResponsePrivate class provides private implementation for DeleteFeatureResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteFeatureResponsePrivate object with public implementation \a q.
 */
DeleteFeatureResponsePrivate::DeleteFeatureResponsePrivate(
    DeleteFeatureResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently DeleteFeature response element from \a xml.
 */
void DeleteFeatureResponsePrivate::parseDeleteFeatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFeatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
