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

#include "createfindingsreportresponse.h"
#include "createfindingsreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::CreateFindingsReportResponse
 * \brief The CreateFindingsReportResponse class provides an interace for Inspector2 CreateFindingsReport responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::createFindingsReport
 */

/*!
 * Constructs a CreateFindingsReportResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFindingsReportResponse::CreateFindingsReportResponse(
        const CreateFindingsReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new CreateFindingsReportResponsePrivate(this), parent)
{
    setRequest(new CreateFindingsReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFindingsReportRequest * CreateFindingsReportResponse::request() const
{
    Q_D(const CreateFindingsReportResponse);
    return static_cast<const CreateFindingsReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 CreateFindingsReport \a response.
 */
void CreateFindingsReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFindingsReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::CreateFindingsReportResponsePrivate
 * \brief The CreateFindingsReportResponsePrivate class provides private implementation for CreateFindingsReportResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a CreateFindingsReportResponsePrivate object with public implementation \a q.
 */
CreateFindingsReportResponsePrivate::CreateFindingsReportResponsePrivate(
    CreateFindingsReportResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 CreateFindingsReport response element from \a xml.
 */
void CreateFindingsReportResponsePrivate::parseCreateFindingsReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFindingsReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
