// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectrecoveryinstanceresponse.h"
#include "disconnectrecoveryinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DisconnectRecoveryInstanceResponse
 * \brief The DisconnectRecoveryInstanceResponse class provides an interace for Drs DisconnectRecoveryInstance responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::disconnectRecoveryInstance
 */

/*!
 * Constructs a DisconnectRecoveryInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DisconnectRecoveryInstanceResponse::DisconnectRecoveryInstanceResponse(
        const DisconnectRecoveryInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DisconnectRecoveryInstanceResponsePrivate(this), parent)
{
    setRequest(new DisconnectRecoveryInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisconnectRecoveryInstanceRequest * DisconnectRecoveryInstanceResponse::request() const
{
    Q_D(const DisconnectRecoveryInstanceResponse);
    return static_cast<const DisconnectRecoveryInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DisconnectRecoveryInstance \a response.
 */
void DisconnectRecoveryInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisconnectRecoveryInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DisconnectRecoveryInstanceResponsePrivate
 * \brief The DisconnectRecoveryInstanceResponsePrivate class provides private implementation for DisconnectRecoveryInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DisconnectRecoveryInstanceResponsePrivate object with public implementation \a q.
 */
DisconnectRecoveryInstanceResponsePrivate::DisconnectRecoveryInstanceResponsePrivate(
    DisconnectRecoveryInstanceResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DisconnectRecoveryInstance response element from \a xml.
 */
void DisconnectRecoveryInstanceResponsePrivate::parseDisconnectRecoveryInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisconnectRecoveryInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
