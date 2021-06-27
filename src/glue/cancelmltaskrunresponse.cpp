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

#include "cancelmltaskrunresponse.h"
#include "cancelmltaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CancelMLTaskRunResponse
 * \brief The CancelMLTaskRunResponse class provides an interace for Glue CancelMLTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::cancelMLTaskRun
 */

/*!
 * Constructs a CancelMLTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
CancelMLTaskRunResponse::CancelMLTaskRunResponse(
        const CancelMLTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CancelMLTaskRunResponsePrivate(this), parent)
{
    setRequest(new CancelMLTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelMLTaskRunRequest * CancelMLTaskRunResponse::request() const
{
    return static_cast<const CancelMLTaskRunRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue CancelMLTaskRun \a response.
 */
void CancelMLTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelMLTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CancelMLTaskRunResponsePrivate
 * \brief The CancelMLTaskRunResponsePrivate class provides private implementation for CancelMLTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CancelMLTaskRunResponsePrivate object with public implementation \a q.
 */
CancelMLTaskRunResponsePrivate::CancelMLTaskRunResponsePrivate(
    CancelMLTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CancelMLTaskRun response element from \a xml.
 */
void CancelMLTaskRunResponsePrivate::parseCancelMLTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelMLTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
