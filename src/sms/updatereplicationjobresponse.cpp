/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatereplicationjobresponse.h"
#include "updatereplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::UpdateReplicationJobResponse
 * \brief The UpdateReplicationJobResponse class provides an interace for SMS UpdateReplicationJob responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::updateReplicationJob
 */

/*!
 * Constructs a UpdateReplicationJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationJobResponse::UpdateReplicationJobResponse(
        const UpdateReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new UpdateReplicationJobResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReplicationJobRequest * UpdateReplicationJobResponse::request() const
{
    Q_D(const UpdateReplicationJobResponse);
    return static_cast<const UpdateReplicationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS UpdateReplicationJob \a response.
 */
void UpdateReplicationJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::UpdateReplicationJobResponsePrivate
 * \brief The UpdateReplicationJobResponsePrivate class provides private implementation for UpdateReplicationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a UpdateReplicationJobResponsePrivate object with public implementation \a q.
 */
UpdateReplicationJobResponsePrivate::UpdateReplicationJobResponsePrivate(
    UpdateReplicationJobResponse * const q) : SMSResponsePrivate(q)
{

}

/*!
 * Parses a SMS UpdateReplicationJob response element from \a xml.
 */
void UpdateReplicationJobResponsePrivate::parseUpdateReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationJobResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
