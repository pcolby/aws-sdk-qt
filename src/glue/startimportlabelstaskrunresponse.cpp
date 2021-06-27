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

#include "startimportlabelstaskrunresponse.h"
#include "startimportlabelstaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartImportLabelsTaskRunResponse
 * \brief The StartImportLabelsTaskRunResponse class provides an interace for Glue StartImportLabelsTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startImportLabelsTaskRun
 */

/*!
 * Constructs a StartImportLabelsTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartImportLabelsTaskRunResponse::StartImportLabelsTaskRunResponse(
        const StartImportLabelsTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartImportLabelsTaskRunResponsePrivate(this), parent)
{
    setRequest(new StartImportLabelsTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImportLabelsTaskRunRequest * StartImportLabelsTaskRunResponse::request() const
{
    return static_cast<const StartImportLabelsTaskRunRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue StartImportLabelsTaskRun \a response.
 */
void StartImportLabelsTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImportLabelsTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartImportLabelsTaskRunResponsePrivate
 * \brief The StartImportLabelsTaskRunResponsePrivate class provides private implementation for StartImportLabelsTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartImportLabelsTaskRunResponsePrivate object with public implementation \a q.
 */
StartImportLabelsTaskRunResponsePrivate::StartImportLabelsTaskRunResponsePrivate(
    StartImportLabelsTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartImportLabelsTaskRun response element from \a xml.
 */
void StartImportLabelsTaskRunResponsePrivate::parseStartImportLabelsTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportLabelsTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
