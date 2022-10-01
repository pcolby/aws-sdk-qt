// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addjobflowstepsresponse.h"
#include "addjobflowstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::AddJobFlowStepsResponse
 * \brief The AddJobFlowStepsResponse class provides an interace for Emr AddJobFlowSteps responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::addJobFlowSteps
 */

/*!
 * Constructs a AddJobFlowStepsResponse object for \a reply to \a request, with parent \a parent.
 */
AddJobFlowStepsResponse::AddJobFlowStepsResponse(
        const AddJobFlowStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new AddJobFlowStepsResponsePrivate(this), parent)
{
    setRequest(new AddJobFlowStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddJobFlowStepsRequest * AddJobFlowStepsResponse::request() const
{
    Q_D(const AddJobFlowStepsResponse);
    return static_cast<const AddJobFlowStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr AddJobFlowSteps \a response.
 */
void AddJobFlowStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddJobFlowStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::AddJobFlowStepsResponsePrivate
 * \brief The AddJobFlowStepsResponsePrivate class provides private implementation for AddJobFlowStepsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a AddJobFlowStepsResponsePrivate object with public implementation \a q.
 */
AddJobFlowStepsResponsePrivate::AddJobFlowStepsResponsePrivate(
    AddJobFlowStepsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr AddJobFlowSteps response element from \a xml.
 */
void AddJobFlowStepsResponsePrivate::parseAddJobFlowStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddJobFlowStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
