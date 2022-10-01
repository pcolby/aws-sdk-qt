// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelabelresponse.h"
#include "deletelabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelResponse
 * \brief The DeleteLabelResponse class provides an interace for LookoutEquipment DeleteLabel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteLabel
 */

/*!
 * Constructs a DeleteLabelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLabelResponse::DeleteLabelResponse(
        const DeleteLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DeleteLabelResponsePrivate(this), parent)
{
    setRequest(new DeleteLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLabelRequest * DeleteLabelResponse::request() const
{
    Q_D(const DeleteLabelResponse);
    return static_cast<const DeleteLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DeleteLabel \a response.
 */
void DeleteLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelResponsePrivate
 * \brief The DeleteLabelResponsePrivate class provides private implementation for DeleteLabelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteLabelResponsePrivate object with public implementation \a q.
 */
DeleteLabelResponsePrivate::DeleteLabelResponsePrivate(
    DeleteLabelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DeleteLabel response element from \a xml.
 */
void DeleteLabelResponsePrivate::parseDeleteLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
