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

#include "deletestudioresponse.h"
#include "deletestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteStudioResponse
 * \brief The DeleteStudioResponse class provides an interace for Emr DeleteStudio responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudio
 */

/*!
 * Constructs a DeleteStudioResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioResponse::DeleteStudioResponse(
        const DeleteStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DeleteStudioResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioRequest * DeleteStudioResponse::request() const
{
    Q_D(const DeleteStudioResponse);
    return static_cast<const DeleteStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DeleteStudio \a response.
 */
void DeleteStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DeleteStudioResponsePrivate
 * \brief The DeleteStudioResponsePrivate class provides private implementation for DeleteStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteStudioResponsePrivate object with public implementation \a q.
 */
DeleteStudioResponsePrivate::DeleteStudioResponsePrivate(
    DeleteStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DeleteStudio response element from \a xml.
 */
void DeleteStudioResponsePrivate::parseDeleteStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
