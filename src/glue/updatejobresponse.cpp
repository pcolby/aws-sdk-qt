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

#include "updatejobresponse.h"
#include "updatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateJobResponse
 * \brief The UpdateJobResponse class provides an interace for Glue UpdateJob responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateJob
 */

/*!
 * Constructs a UpdateJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobResponse::UpdateJobResponse(
        const UpdateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateJobResponsePrivate(this), parent)
{
    setRequest(new UpdateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobRequest * UpdateJobResponse::request() const
{
    Q_D(const UpdateJobResponse);
    return static_cast<const UpdateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateJob \a response.
 */
void UpdateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateJobResponsePrivate
 * \brief The UpdateJobResponsePrivate class provides private implementation for UpdateJobResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateJobResponsePrivate object with public implementation \a q.
 */
UpdateJobResponsePrivate::UpdateJobResponsePrivate(
    UpdateJobResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateJob response element from \a xml.
 */
void UpdateJobResponsePrivate::parseUpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
