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

#include "createthemealiasresponse.h"
#include "createthemealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateThemeAliasResponse
 * \brief The CreateThemeAliasResponse class provides an interace for QuickSight CreateThemeAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createThemeAlias
 */

/*!
 * Constructs a CreateThemeAliasResponse object for \a reply to \a request, with parent \a parent.
 */
CreateThemeAliasResponse::CreateThemeAliasResponse(
        const CreateThemeAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateThemeAliasResponsePrivate(this), parent)
{
    setRequest(new CreateThemeAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateThemeAliasRequest * CreateThemeAliasResponse::request() const
{
    Q_D(const CreateThemeAliasResponse);
    return static_cast<const CreateThemeAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateThemeAlias \a response.
 */
void CreateThemeAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateThemeAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateThemeAliasResponsePrivate
 * \brief The CreateThemeAliasResponsePrivate class provides private implementation for CreateThemeAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateThemeAliasResponsePrivate object with public implementation \a q.
 */
CreateThemeAliasResponsePrivate::CreateThemeAliasResponsePrivate(
    CreateThemeAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateThemeAlias response element from \a xml.
 */
void CreateThemeAliasResponsePrivate::parseCreateThemeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThemeAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
