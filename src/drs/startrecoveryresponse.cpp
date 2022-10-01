// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrecoveryresponse.h"
#include "startrecoveryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::StartRecoveryResponse
 * \brief The StartRecoveryResponse class provides an interace for Drs StartRecovery responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::startRecovery
 */

/*!
 * Constructs a StartRecoveryResponse object for \a reply to \a request, with parent \a parent.
 */
StartRecoveryResponse::StartRecoveryResponse(
        const StartRecoveryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new StartRecoveryResponsePrivate(this), parent)
{
    setRequest(new StartRecoveryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRecoveryRequest * StartRecoveryResponse::request() const
{
    Q_D(const StartRecoveryResponse);
    return static_cast<const StartRecoveryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs StartRecovery \a response.
 */
void StartRecoveryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRecoveryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::StartRecoveryResponsePrivate
 * \brief The StartRecoveryResponsePrivate class provides private implementation for StartRecoveryResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a StartRecoveryResponsePrivate object with public implementation \a q.
 */
StartRecoveryResponsePrivate::StartRecoveryResponsePrivate(
    StartRecoveryResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs StartRecovery response element from \a xml.
 */
void StartRecoveryResponsePrivate::parseStartRecoveryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRecoveryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
