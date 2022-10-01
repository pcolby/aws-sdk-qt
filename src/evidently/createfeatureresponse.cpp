// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfeatureresponse.h"
#include "createfeatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateFeatureResponse
 * \brief The CreateFeatureResponse class provides an interace for Evidently CreateFeature responses.
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
 * \sa EvidentlyClient::createFeature
 */

/*!
 * Constructs a CreateFeatureResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFeatureResponse::CreateFeatureResponse(
        const CreateFeatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new CreateFeatureResponsePrivate(this), parent)
{
    setRequest(new CreateFeatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFeatureRequest * CreateFeatureResponse::request() const
{
    Q_D(const CreateFeatureResponse);
    return static_cast<const CreateFeatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently CreateFeature \a response.
 */
void CreateFeatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFeatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::CreateFeatureResponsePrivate
 * \brief The CreateFeatureResponsePrivate class provides private implementation for CreateFeatureResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateFeatureResponsePrivate object with public implementation \a q.
 */
CreateFeatureResponsePrivate::CreateFeatureResponsePrivate(
    CreateFeatureResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently CreateFeature response element from \a xml.
 */
void CreateFeatureResponsePrivate::parseCreateFeatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFeatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
