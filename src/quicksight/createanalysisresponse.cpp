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

#include "createanalysisresponse.h"
#include "createanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateAnalysisResponse
 * \brief The CreateAnalysisResponse class provides an interace for QuickSight CreateAnalysis responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createAnalysis
 */

/*!
 * Constructs a CreateAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAnalysisResponse::CreateAnalysisResponse(
        const CreateAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateAnalysisResponsePrivate(this), parent)
{
    setRequest(new CreateAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAnalysisRequest * CreateAnalysisResponse::request() const
{
    Q_D(const CreateAnalysisResponse);
    return static_cast<const CreateAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateAnalysis \a response.
 */
void CreateAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateAnalysisResponsePrivate
 * \brief The CreateAnalysisResponsePrivate class provides private implementation for CreateAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateAnalysisResponsePrivate object with public implementation \a q.
 */
CreateAnalysisResponsePrivate::CreateAnalysisResponsePrivate(
    CreateAnalysisResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateAnalysis response element from \a xml.
 */
void CreateAnalysisResponsePrivate::parseCreateAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
