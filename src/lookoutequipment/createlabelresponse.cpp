// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlabelresponse.h"
#include "createlabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateLabelResponse
 * \brief The CreateLabelResponse class provides an interace for LookoutEquipment CreateLabel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createLabel
 */

/*!
 * Constructs a CreateLabelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLabelResponse::CreateLabelResponse(
        const CreateLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new CreateLabelResponsePrivate(this), parent)
{
    setRequest(new CreateLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLabelRequest * CreateLabelResponse::request() const
{
    Q_D(const CreateLabelResponse);
    return static_cast<const CreateLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment CreateLabel \a response.
 */
void CreateLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::CreateLabelResponsePrivate
 * \brief The CreateLabelResponsePrivate class provides private implementation for CreateLabelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateLabelResponsePrivate object with public implementation \a q.
 */
CreateLabelResponsePrivate::CreateLabelResponsePrivate(
    CreateLabelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment CreateLabel response element from \a xml.
 */
void CreateLabelResponsePrivate::parseCreateLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
