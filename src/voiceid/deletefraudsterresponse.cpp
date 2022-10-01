/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletefraudsterresponse.h"
#include "deletefraudsterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DeleteFraudsterResponse
 * \brief The DeleteFraudsterResponse class provides an interace for VoiceId DeleteFraudster responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::deleteFraudster
 */

/*!
 * Constructs a DeleteFraudsterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFraudsterResponse::DeleteFraudsterResponse(
        const DeleteFraudsterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DeleteFraudsterResponsePrivate(this), parent)
{
    setRequest(new DeleteFraudsterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFraudsterRequest * DeleteFraudsterResponse::request() const
{
    Q_D(const DeleteFraudsterResponse);
    return static_cast<const DeleteFraudsterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DeleteFraudster \a response.
 */
void DeleteFraudsterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFraudsterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DeleteFraudsterResponsePrivate
 * \brief The DeleteFraudsterResponsePrivate class provides private implementation for DeleteFraudsterResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DeleteFraudsterResponsePrivate object with public implementation \a q.
 */
DeleteFraudsterResponsePrivate::DeleteFraudsterResponsePrivate(
    DeleteFraudsterResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DeleteFraudster response element from \a xml.
 */
void DeleteFraudsterResponsePrivate::parseDeleteFraudsterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFraudsterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
