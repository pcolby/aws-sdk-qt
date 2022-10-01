// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelresponse.h"
#include "createmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateModelResponse
 * \brief The CreateModelResponse class provides an interace for LookoutEquipment CreateModel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createModel
 */

/*!
 * Constructs a CreateModelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateModelResponse::CreateModelResponse(
        const CreateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new CreateModelResponsePrivate(this), parent)
{
    setRequest(new CreateModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateModelRequest * CreateModelResponse::request() const
{
    Q_D(const CreateModelResponse);
    return static_cast<const CreateModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment CreateModel \a response.
 */
void CreateModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::CreateModelResponsePrivate
 * \brief The CreateModelResponsePrivate class provides private implementation for CreateModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateModelResponsePrivate object with public implementation \a q.
 */
CreateModelResponsePrivate::CreateModelResponsePrivate(
    CreateModelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment CreateModel response element from \a xml.
 */
void CreateModelResponsePrivate::parseCreateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
