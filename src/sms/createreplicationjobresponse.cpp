/*
    Copyright 2013-2018 Paul Colby

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

#include "createreplicationjobresponse.h"
#include "createreplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::CreateReplicationJobResponse
 * \brief The CreateReplicationJobResponse class provides an interace for SMS CreateReplicationJob responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SmsClient::createReplicationJob
 */

/*!
 * Constructs a CreateReplicationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationJobResponse::CreateReplicationJobResponse(
        const CreateReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new CreateReplicationJobResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationJobRequest * CreateReplicationJobResponse::request() const
{
    Q_D(const CreateReplicationJobResponse);
    return static_cast<const CreateReplicationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS CreateReplicationJob \a response.
 */
void CreateReplicationJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::CreateReplicationJobResponsePrivate
 * \brief The CreateReplicationJobResponsePrivate class provides private implementation for CreateReplicationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a CreateReplicationJobResponsePrivate object with public implementation \a q.
 */
CreateReplicationJobResponsePrivate::CreateReplicationJobResponsePrivate(
    CreateReplicationJobResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS CreateReplicationJob response element from \a xml.
 */
void CreateReplicationJobResponsePrivate::parseCreateReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationJobResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
