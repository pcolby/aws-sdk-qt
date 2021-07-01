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

#include "starttabledataimportjobresponse.h"
#include "starttabledataimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobResponse
 * \brief The StartTableDataImportJobResponse class provides an interace for Honeycode StartTableDataImportJob responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::startTableDataImportJob
 */

/*!
 * Constructs a StartTableDataImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTableDataImportJobResponse::StartTableDataImportJobResponse(
        const StartTableDataImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new StartTableDataImportJobResponsePrivate(this), parent)
{
    setRequest(new StartTableDataImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTableDataImportJobRequest * StartTableDataImportJobResponse::request() const
{
    Q_D(const StartTableDataImportJobResponse);
    return static_cast<const StartTableDataImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode StartTableDataImportJob \a response.
 */
void StartTableDataImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTableDataImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobResponsePrivate
 * \brief The StartTableDataImportJobResponsePrivate class provides private implementation for StartTableDataImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a StartTableDataImportJobResponsePrivate object with public implementation \a q.
 */
StartTableDataImportJobResponsePrivate::StartTableDataImportJobResponsePrivate(
    StartTableDataImportJobResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode StartTableDataImportJob response element from \a xml.
 */
void StartTableDataImportJobResponsePrivate::parseStartTableDataImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTableDataImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
