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

#include "deletethemealiasresponse.h"
#include "deletethemealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteThemeAliasResponse
 * \brief The DeleteThemeAliasResponse class provides an interace for QuickSight DeleteThemeAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteThemeAlias
 */

/*!
 * Constructs a DeleteThemeAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThemeAliasResponse::DeleteThemeAliasResponse(
        const DeleteThemeAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteThemeAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteThemeAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThemeAliasRequest * DeleteThemeAliasResponse::request() const
{
    Q_D(const DeleteThemeAliasResponse);
    return static_cast<const DeleteThemeAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteThemeAlias \a response.
 */
void DeleteThemeAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThemeAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteThemeAliasResponsePrivate
 * \brief The DeleteThemeAliasResponsePrivate class provides private implementation for DeleteThemeAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteThemeAliasResponsePrivate object with public implementation \a q.
 */
DeleteThemeAliasResponsePrivate::DeleteThemeAliasResponsePrivate(
    DeleteThemeAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteThemeAlias response element from \a xml.
 */
void DeleteThemeAliasResponsePrivate::parseDeleteThemeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThemeAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
