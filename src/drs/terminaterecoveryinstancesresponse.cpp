// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminaterecoveryinstancesresponse.h"
#include "terminaterecoveryinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::TerminateRecoveryInstancesResponse
 * \brief The TerminateRecoveryInstancesResponse class provides an interace for Drs TerminateRecoveryInstances responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::terminateRecoveryInstances
 */

/*!
 * Constructs a TerminateRecoveryInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateRecoveryInstancesResponse::TerminateRecoveryInstancesResponse(
        const TerminateRecoveryInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new TerminateRecoveryInstancesResponsePrivate(this), parent)
{
    setRequest(new TerminateRecoveryInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateRecoveryInstancesRequest * TerminateRecoveryInstancesResponse::request() const
{
    Q_D(const TerminateRecoveryInstancesResponse);
    return static_cast<const TerminateRecoveryInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs TerminateRecoveryInstances \a response.
 */
void TerminateRecoveryInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateRecoveryInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::TerminateRecoveryInstancesResponsePrivate
 * \brief The TerminateRecoveryInstancesResponsePrivate class provides private implementation for TerminateRecoveryInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a TerminateRecoveryInstancesResponsePrivate object with public implementation \a q.
 */
TerminateRecoveryInstancesResponsePrivate::TerminateRecoveryInstancesResponsePrivate(
    TerminateRecoveryInstancesResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs TerminateRecoveryInstances response element from \a xml.
 */
void TerminateRecoveryInstancesResponsePrivate::parseTerminateRecoveryInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateRecoveryInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
