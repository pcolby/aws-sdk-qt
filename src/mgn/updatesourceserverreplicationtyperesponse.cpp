// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesourceserverreplicationtyperesponse.h"
#include "updatesourceserverreplicationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateSourceServerReplicationTypeResponse
 * \brief The UpdateSourceServerReplicationTypeResponse class provides an interace for Mgn UpdateSourceServerReplicationType responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateSourceServerReplicationType
 */

/*!
 * Constructs a UpdateSourceServerReplicationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSourceServerReplicationTypeResponse::UpdateSourceServerReplicationTypeResponse(
        const UpdateSourceServerReplicationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new UpdateSourceServerReplicationTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateSourceServerReplicationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSourceServerReplicationTypeRequest * UpdateSourceServerReplicationTypeResponse::request() const
{
    Q_D(const UpdateSourceServerReplicationTypeResponse);
    return static_cast<const UpdateSourceServerReplicationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn UpdateSourceServerReplicationType \a response.
 */
void UpdateSourceServerReplicationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSourceServerReplicationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::UpdateSourceServerReplicationTypeResponsePrivate
 * \brief The UpdateSourceServerReplicationTypeResponsePrivate class provides private implementation for UpdateSourceServerReplicationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateSourceServerReplicationTypeResponsePrivate object with public implementation \a q.
 */
UpdateSourceServerReplicationTypeResponsePrivate::UpdateSourceServerReplicationTypeResponsePrivate(
    UpdateSourceServerReplicationTypeResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn UpdateSourceServerReplicationType response element from \a xml.
 */
void UpdateSourceServerReplicationTypeResponsePrivate::parseUpdateSourceServerReplicationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSourceServerReplicationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
