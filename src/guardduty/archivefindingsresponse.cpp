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

#include "archivefindingsresponse.h"
#include "archivefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ArchiveFindingsResponse
 * \brief The ArchiveFindingsResponse class provides an interace for GuardDuty ArchiveFindings responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::archiveFindings
 */

/*!
 * Constructs a ArchiveFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
ArchiveFindingsResponse::ArchiveFindingsResponse(
        const ArchiveFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ArchiveFindingsResponsePrivate(this), parent)
{
    setRequest(new ArchiveFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ArchiveFindingsRequest * ArchiveFindingsResponse::request() const
{
    Q_D(const ArchiveFindingsResponse);
    return static_cast<const ArchiveFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty ArchiveFindings \a response.
 */
void ArchiveFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ArchiveFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::ArchiveFindingsResponsePrivate
 * \brief The ArchiveFindingsResponsePrivate class provides private implementation for ArchiveFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ArchiveFindingsResponsePrivate object with public implementation \a q.
 */
ArchiveFindingsResponsePrivate::ArchiveFindingsResponsePrivate(
    ArchiveFindingsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty ArchiveFindings response element from \a xml.
 */
void ArchiveFindingsResponsePrivate::parseArchiveFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ArchiveFindingsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
