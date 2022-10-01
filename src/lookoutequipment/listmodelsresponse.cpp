// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelsresponse.h"
#include "listmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListModelsResponse
 * \brief The ListModelsResponse class provides an interace for LookoutEquipment ListModels responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listModels
 */

/*!
 * Constructs a ListModelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelsResponse::ListModelsResponse(
        const ListModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListModelsResponsePrivate(this), parent)
{
    setRequest(new ListModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelsRequest * ListModelsResponse::request() const
{
    Q_D(const ListModelsResponse);
    return static_cast<const ListModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListModels \a response.
 */
void ListModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListModelsResponsePrivate
 * \brief The ListModelsResponsePrivate class provides private implementation for ListModelsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListModelsResponsePrivate object with public implementation \a q.
 */
ListModelsResponsePrivate::ListModelsResponsePrivate(
    ListModelsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListModels response element from \a xml.
 */
void ListModelsResponsePrivate::parseListModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
