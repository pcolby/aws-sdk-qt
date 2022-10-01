// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyinstancefleetresponse.h"
#include "modifyinstancefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ModifyInstanceFleetResponse
 * \brief The ModifyInstanceFleetResponse class provides an interace for Emr ModifyInstanceFleet responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyInstanceFleet
 */

/*!
 * Constructs a ModifyInstanceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyInstanceFleetResponse::ModifyInstanceFleetResponse(
        const ModifyInstanceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ModifyInstanceFleetResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyInstanceFleetRequest * ModifyInstanceFleetResponse::request() const
{
    Q_D(const ModifyInstanceFleetResponse);
    return static_cast<const ModifyInstanceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ModifyInstanceFleet \a response.
 */
void ModifyInstanceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyInstanceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ModifyInstanceFleetResponsePrivate
 * \brief The ModifyInstanceFleetResponsePrivate class provides private implementation for ModifyInstanceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ModifyInstanceFleetResponsePrivate object with public implementation \a q.
 */
ModifyInstanceFleetResponsePrivate::ModifyInstanceFleetResponsePrivate(
    ModifyInstanceFleetResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ModifyInstanceFleet response element from \a xml.
 */
void ModifyInstanceFleetResponsePrivate::parseModifyInstanceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
