/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getimportjobresponse.h"
#include "getimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobResponse
 * \brief The GetImportJobResponse class provides an interace for Pinpoint GetImportJob responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getImportJob
 */

/*!
 * Constructs a GetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportJobResponse::GetImportJobResponse(
        const GetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetImportJobResponsePrivate(this), parent)
{
    setRequest(new GetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportJobRequest * GetImportJobResponse::request() const
{
    Q_D(const GetImportJobResponse);
    return static_cast<const GetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetImportJob \a response.
 */
void GetImportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetImportJobResponsePrivate
 * \brief The GetImportJobResponsePrivate class provides private implementation for GetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetImportJobResponsePrivate object with public implementation \a q.
 */
GetImportJobResponsePrivate::GetImportJobResponsePrivate(
    GetImportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetImportJob response element from \a xml.
 */
void GetImportJobResponsePrivate::parseGetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
