// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectdatadeliveryresponse.h"
#include "updateprojectdatadeliveryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateProjectDataDeliveryResponse
 * \brief The UpdateProjectDataDeliveryResponse class provides an interace for Evidently UpdateProjectDataDelivery responses.
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
 * \sa EvidentlyClient::updateProjectDataDelivery
 */

/*!
 * Constructs a UpdateProjectDataDeliveryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProjectDataDeliveryResponse::UpdateProjectDataDeliveryResponse(
        const UpdateProjectDataDeliveryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new UpdateProjectDataDeliveryResponsePrivate(this), parent)
{
    setRequest(new UpdateProjectDataDeliveryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProjectDataDeliveryRequest * UpdateProjectDataDeliveryResponse::request() const
{
    Q_D(const UpdateProjectDataDeliveryResponse);
    return static_cast<const UpdateProjectDataDeliveryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently UpdateProjectDataDelivery \a response.
 */
void UpdateProjectDataDeliveryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProjectDataDeliveryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::UpdateProjectDataDeliveryResponsePrivate
 * \brief The UpdateProjectDataDeliveryResponsePrivate class provides private implementation for UpdateProjectDataDeliveryResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateProjectDataDeliveryResponsePrivate object with public implementation \a q.
 */
UpdateProjectDataDeliveryResponsePrivate::UpdateProjectDataDeliveryResponsePrivate(
    UpdateProjectDataDeliveryResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently UpdateProjectDataDelivery response element from \a xml.
 */
void UpdateProjectDataDeliveryResponsePrivate::parseUpdateProjectDataDeliveryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProjectDataDeliveryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
