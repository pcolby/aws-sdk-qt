// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecoveryinstanceresponse.h"
#include "deleterecoveryinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DeleteRecoveryInstanceResponse
 * \brief The DeleteRecoveryInstanceResponse class provides an interace for Drs DeleteRecoveryInstance responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::deleteRecoveryInstance
 */

/*!
 * Constructs a DeleteRecoveryInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecoveryInstanceResponse::DeleteRecoveryInstanceResponse(
        const DeleteRecoveryInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DeleteRecoveryInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteRecoveryInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecoveryInstanceRequest * DeleteRecoveryInstanceResponse::request() const
{
    Q_D(const DeleteRecoveryInstanceResponse);
    return static_cast<const DeleteRecoveryInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DeleteRecoveryInstance \a response.
 */
void DeleteRecoveryInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecoveryInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DeleteRecoveryInstanceResponsePrivate
 * \brief The DeleteRecoveryInstanceResponsePrivate class provides private implementation for DeleteRecoveryInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DeleteRecoveryInstanceResponsePrivate object with public implementation \a q.
 */
DeleteRecoveryInstanceResponsePrivate::DeleteRecoveryInstanceResponsePrivate(
    DeleteRecoveryInstanceResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DeleteRecoveryInstance response element from \a xml.
 */
void DeleteRecoveryInstanceResponsePrivate::parseDeleteRecoveryInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecoveryInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
