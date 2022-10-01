// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinferenceschedulerresponse.h"
#include "createinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateInferenceSchedulerResponse
 * \brief The CreateInferenceSchedulerResponse class provides an interace for LookoutEquipment CreateInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createInferenceScheduler
 */

/*!
 * Constructs a CreateInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInferenceSchedulerResponse::CreateInferenceSchedulerResponse(
        const CreateInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new CreateInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new CreateInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInferenceSchedulerRequest * CreateInferenceSchedulerResponse::request() const
{
    Q_D(const CreateInferenceSchedulerResponse);
    return static_cast<const CreateInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment CreateInferenceScheduler \a response.
 */
void CreateInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::CreateInferenceSchedulerResponsePrivate
 * \brief The CreateInferenceSchedulerResponsePrivate class provides private implementation for CreateInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
CreateInferenceSchedulerResponsePrivate::CreateInferenceSchedulerResponsePrivate(
    CreateInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment CreateInferenceScheduler response element from \a xml.
 */
void CreateInferenceSchedulerResponsePrivate::parseCreateInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
