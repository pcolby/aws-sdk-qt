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

#include "deletereplicationjobresponse.h"
#include "deletereplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DeleteReplicationJobResponse
 * \brief The DeleteReplicationJobResponse class provides an interace for SMS DeleteReplicationJob responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::deleteReplicationJob
 */

/*!
 * Constructs a DeleteReplicationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationJobResponse::DeleteReplicationJobResponse(
        const DeleteReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new DeleteReplicationJobResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationJobRequest * DeleteReplicationJobResponse::request() const
{
    Q_D(const DeleteReplicationJobResponse);
    return static_cast<const DeleteReplicationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS DeleteReplicationJob \a response.
 */
void DeleteReplicationJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::DeleteReplicationJobResponsePrivate
 * \brief The DeleteReplicationJobResponsePrivate class provides private implementation for DeleteReplicationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a DeleteReplicationJobResponsePrivate object with public implementation \a q.
 */
DeleteReplicationJobResponsePrivate::DeleteReplicationJobResponsePrivate(
    DeleteReplicationJobResponse * const q) : SMSResponsePrivate(q)
{

}

/*!
 * Parses a SMS DeleteReplicationJob response element from \a xml.
 */
void DeleteReplicationJobResponsePrivate::parseDeleteReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationJobResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
