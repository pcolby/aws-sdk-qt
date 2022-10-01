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

#include "deleteworkloadresponse.h"
#include "deleteworkloadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadResponse
 * \brief The DeleteWorkloadResponse class provides an interace for WellArchitected DeleteWorkload responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::deleteWorkload
 */

/*!
 * Constructs a DeleteWorkloadResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkloadResponse::DeleteWorkloadResponse(
        const DeleteWorkloadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new DeleteWorkloadResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkloadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkloadRequest * DeleteWorkloadResponse::request() const
{
    Q_D(const DeleteWorkloadResponse);
    return static_cast<const DeleteWorkloadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected DeleteWorkload \a response.
 */
void DeleteWorkloadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkloadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::DeleteWorkloadResponsePrivate
 * \brief The DeleteWorkloadResponsePrivate class provides private implementation for DeleteWorkloadResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DeleteWorkloadResponsePrivate object with public implementation \a q.
 */
DeleteWorkloadResponsePrivate::DeleteWorkloadResponsePrivate(
    DeleteWorkloadResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected DeleteWorkload response element from \a xml.
 */
void DeleteWorkloadResponsePrivate::parseDeleteWorkloadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkloadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
