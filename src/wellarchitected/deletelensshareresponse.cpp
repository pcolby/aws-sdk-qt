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

#include "deletelensshareresponse.h"
#include "deletelensshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::DeleteLensShareResponse
 * \brief The DeleteLensShareResponse class provides an interace for WellArchitected DeleteLensShare responses.
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
 * \sa WellArchitectedClient::deleteLensShare
 */

/*!
 * Constructs a DeleteLensShareResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLensShareResponse::DeleteLensShareResponse(
        const DeleteLensShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new DeleteLensShareResponsePrivate(this), parent)
{
    setRequest(new DeleteLensShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLensShareRequest * DeleteLensShareResponse::request() const
{
    Q_D(const DeleteLensShareResponse);
    return static_cast<const DeleteLensShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected DeleteLensShare \a response.
 */
void DeleteLensShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLensShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::DeleteLensShareResponsePrivate
 * \brief The DeleteLensShareResponsePrivate class provides private implementation for DeleteLensShareResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a DeleteLensShareResponsePrivate object with public implementation \a q.
 */
DeleteLensShareResponsePrivate::DeleteLensShareResponsePrivate(
    DeleteLensShareResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected DeleteLensShare response element from \a xml.
 */
void DeleteLensShareResponsePrivate::parseDeleteLensShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLensShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
