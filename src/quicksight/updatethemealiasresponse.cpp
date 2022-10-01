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

#include "updatethemealiasresponse.h"
#include "updatethemealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateThemeAliasResponse
 * \brief The UpdateThemeAliasResponse class provides an interace for QuickSight UpdateThemeAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateThemeAlias
 */

/*!
 * Constructs a UpdateThemeAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThemeAliasResponse::UpdateThemeAliasResponse(
        const UpdateThemeAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateThemeAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateThemeAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThemeAliasRequest * UpdateThemeAliasResponse::request() const
{
    Q_D(const UpdateThemeAliasResponse);
    return static_cast<const UpdateThemeAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateThemeAlias \a response.
 */
void UpdateThemeAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThemeAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateThemeAliasResponsePrivate
 * \brief The UpdateThemeAliasResponsePrivate class provides private implementation for UpdateThemeAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateThemeAliasResponsePrivate object with public implementation \a q.
 */
UpdateThemeAliasResponsePrivate::UpdateThemeAliasResponsePrivate(
    UpdateThemeAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateThemeAlias response element from \a xml.
 */
void UpdateThemeAliasResponsePrivate::parseUpdateThemeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThemeAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
