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

#include "deletefilterresponse.h"
#include "deletefilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DeleteFilterResponse
 * \brief The DeleteFilterResponse class provides an interace for Inspector2 DeleteFilter responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::deleteFilter
 */

/*!
 * Constructs a DeleteFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFilterResponse::DeleteFilterResponse(
        const DeleteFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new DeleteFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFilterRequest * DeleteFilterResponse::request() const
{
    Q_D(const DeleteFilterResponse);
    return static_cast<const DeleteFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 DeleteFilter \a response.
 */
void DeleteFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::DeleteFilterResponsePrivate
 * \brief The DeleteFilterResponsePrivate class provides private implementation for DeleteFilterResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DeleteFilterResponsePrivate object with public implementation \a q.
 */
DeleteFilterResponsePrivate::DeleteFilterResponsePrivate(
    DeleteFilterResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 DeleteFilter response element from \a xml.
 */
void DeleteFilterResponsePrivate::parseDeleteFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
