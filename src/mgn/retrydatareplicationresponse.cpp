// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrydatareplicationresponse.h"
#include "retrydatareplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::RetryDataReplicationResponse
 * \brief The RetryDataReplicationResponse class provides an interace for Mgn RetryDataReplication responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::retryDataReplication
 */

/*!
 * Constructs a RetryDataReplicationResponse object for \a reply to \a request, with parent \a parent.
 */
RetryDataReplicationResponse::RetryDataReplicationResponse(
        const RetryDataReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new RetryDataReplicationResponsePrivate(this), parent)
{
    setRequest(new RetryDataReplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetryDataReplicationRequest * RetryDataReplicationResponse::request() const
{
    Q_D(const RetryDataReplicationResponse);
    return static_cast<const RetryDataReplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn RetryDataReplication \a response.
 */
void RetryDataReplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetryDataReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::RetryDataReplicationResponsePrivate
 * \brief The RetryDataReplicationResponsePrivate class provides private implementation for RetryDataReplicationResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a RetryDataReplicationResponsePrivate object with public implementation \a q.
 */
RetryDataReplicationResponsePrivate::RetryDataReplicationResponsePrivate(
    RetryDataReplicationResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn RetryDataReplication response element from \a xml.
 */
void RetryDataReplicationResponsePrivate::parseRetryDataReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetryDataReplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
