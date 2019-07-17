/*
    Copyright 2013-2019 Paul Colby

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

#include "putworkflowrunpropertiesresponse.h"
#include "putworkflowrunpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutWorkflowRunPropertiesResponse
 * \brief The PutWorkflowRunPropertiesResponse class provides an interace for Glue PutWorkflowRunProperties responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::putWorkflowRunProperties
 */

/*!
 * Constructs a PutWorkflowRunPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
PutWorkflowRunPropertiesResponse::PutWorkflowRunPropertiesResponse(
        const PutWorkflowRunPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new PutWorkflowRunPropertiesResponsePrivate(this), parent)
{
    setRequest(new PutWorkflowRunPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutWorkflowRunPropertiesRequest * PutWorkflowRunPropertiesResponse::request() const
{
    Q_D(const PutWorkflowRunPropertiesResponse);
    return static_cast<const PutWorkflowRunPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue PutWorkflowRunProperties \a response.
 */
void PutWorkflowRunPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutWorkflowRunPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::PutWorkflowRunPropertiesResponsePrivate
 * \brief The PutWorkflowRunPropertiesResponsePrivate class provides private implementation for PutWorkflowRunPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutWorkflowRunPropertiesResponsePrivate object with public implementation \a q.
 */
PutWorkflowRunPropertiesResponsePrivate::PutWorkflowRunPropertiesResponsePrivate(
    PutWorkflowRunPropertiesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue PutWorkflowRunProperties response element from \a xml.
 */
void PutWorkflowRunPropertiesResponsePrivate::parsePutWorkflowRunPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutWorkflowRunPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
