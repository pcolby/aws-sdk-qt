// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addinstancefleetresponse.h"
#include "addinstancefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::AddInstanceFleetResponse
 * \brief The AddInstanceFleetResponse class provides an interace for Emr AddInstanceFleet responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::addInstanceFleet
 */

/*!
 * Constructs a AddInstanceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
AddInstanceFleetResponse::AddInstanceFleetResponse(
        const AddInstanceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new AddInstanceFleetResponsePrivate(this), parent)
{
    setRequest(new AddInstanceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddInstanceFleetRequest * AddInstanceFleetResponse::request() const
{
    Q_D(const AddInstanceFleetResponse);
    return static_cast<const AddInstanceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr AddInstanceFleet \a response.
 */
void AddInstanceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddInstanceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::AddInstanceFleetResponsePrivate
 * \brief The AddInstanceFleetResponsePrivate class provides private implementation for AddInstanceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a AddInstanceFleetResponsePrivate object with public implementation \a q.
 */
AddInstanceFleetResponsePrivate::AddInstanceFleetResponsePrivate(
    AddInstanceFleetResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr AddInstanceFleet response element from \a xml.
 */
void AddInstanceFleetResponsePrivate::parseAddInstanceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddInstanceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
