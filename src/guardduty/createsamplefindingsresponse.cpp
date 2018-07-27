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

#include "createsamplefindingsresponse.h"
#include "createsamplefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateSampleFindingsResponse
 * \brief The CreateSampleFindingsResponse class provides an interace for GuardDuty CreateSampleFindings responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createSampleFindings
 */

/*!
 * Constructs a CreateSampleFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSampleFindingsResponse::CreateSampleFindingsResponse(
        const CreateSampleFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateSampleFindingsResponsePrivate(this), parent)
{
    setRequest(new CreateSampleFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSampleFindingsRequest * CreateSampleFindingsResponse::request() const
{
    Q_D(const CreateSampleFindingsResponse);
    return static_cast<const CreateSampleFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty CreateSampleFindings \a response.
 */
void CreateSampleFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSampleFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::CreateSampleFindingsResponsePrivate
 * \brief The CreateSampleFindingsResponsePrivate class provides private implementation for CreateSampleFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateSampleFindingsResponsePrivate object with public implementation \a q.
 */
CreateSampleFindingsResponsePrivate::CreateSampleFindingsResponsePrivate(
    CreateSampleFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty CreateSampleFindings response element from \a xml.
 */
void CreateSampleFindingsResponsePrivate::parseCreateSampleFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSampleFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
