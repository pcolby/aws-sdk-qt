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

#include "startreportcreationresponse.h"
#include "startreportcreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::StartReportCreationResponse
 * \brief The StartReportCreationResponse class provides an interace for ResourceGroupsTagging StartReportCreation responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::startReportCreation
 */

/*!
 * Constructs a StartReportCreationResponse object for \a reply to \a request, with parent \a parent.
 */
StartReportCreationResponse::StartReportCreationResponse(
        const StartReportCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new StartReportCreationResponsePrivate(this), parent)
{
    setRequest(new StartReportCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReportCreationRequest * StartReportCreationResponse::request() const
{
    Q_D(const StartReportCreationResponse);
    return static_cast<const StartReportCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTagging StartReportCreation \a response.
 */
void StartReportCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReportCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::StartReportCreationResponsePrivate
 * \brief The StartReportCreationResponsePrivate class provides private implementation for StartReportCreationResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a StartReportCreationResponsePrivate object with public implementation \a q.
 */
StartReportCreationResponsePrivate::StartReportCreationResponsePrivate(
    StartReportCreationResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging StartReportCreation response element from \a xml.
 */
void StartReportCreationResponsePrivate::parseStartReportCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReportCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
