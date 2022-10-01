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

#include "startmlevaluationtaskrunresponse.h"
#include "startmlevaluationtaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartMLEvaluationTaskRunResponse
 * \brief The StartMLEvaluationTaskRunResponse class provides an interace for Glue StartMLEvaluationTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startMLEvaluationTaskRun
 */

/*!
 * Constructs a StartMLEvaluationTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartMLEvaluationTaskRunResponse::StartMLEvaluationTaskRunResponse(
        const StartMLEvaluationTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartMLEvaluationTaskRunResponsePrivate(this), parent)
{
    setRequest(new StartMLEvaluationTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMLEvaluationTaskRunRequest * StartMLEvaluationTaskRunResponse::request() const
{
    Q_D(const StartMLEvaluationTaskRunResponse);
    return static_cast<const StartMLEvaluationTaskRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartMLEvaluationTaskRun \a response.
 */
void StartMLEvaluationTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMLEvaluationTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartMLEvaluationTaskRunResponsePrivate
 * \brief The StartMLEvaluationTaskRunResponsePrivate class provides private implementation for StartMLEvaluationTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartMLEvaluationTaskRunResponsePrivate object with public implementation \a q.
 */
StartMLEvaluationTaskRunResponsePrivate::StartMLEvaluationTaskRunResponsePrivate(
    StartMLEvaluationTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartMLEvaluationTaskRun response element from \a xml.
 */
void StartMLEvaluationTaskRunResponsePrivate::parseStartMLEvaluationTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMLEvaluationTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
