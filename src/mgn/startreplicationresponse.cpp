// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplicationresponse.h"
#include "startreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::StartReplicationResponse
 * \brief The StartReplicationResponse class provides an interace for Mgn StartReplication responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::startReplication
 */

/*!
 * Constructs a StartReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
StartReplicationResponse::StartReplicationResponse(
        const StartReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new StartReplicationResponsePrivate(this), parent)
{
    setRequest(new StartReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReplicationRequest * StartReplicationResponse::request() const
{
    Q_D(const StartReplicationResponse);
    return static_cast<const StartReplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn StartReplication \a response.
 */
void StartReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::StartReplicationResponsePrivate
 * \brief The StartReplicationResponsePrivate class provides private implementation for StartReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a StartReplicationResponsePrivate object with public implementation \a q.
 */
StartReplicationResponsePrivate::StartReplicationResponsePrivate(
    StartReplicationResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn StartReplication response element from \a xml.
 */
void StartReplicationResponsePrivate::parseStartReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
