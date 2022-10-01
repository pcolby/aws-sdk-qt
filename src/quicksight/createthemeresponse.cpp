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

#include "createthemeresponse.h"
#include "createthemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateThemeResponse
 * \brief The CreateThemeResponse class provides an interace for QuickSight CreateTheme responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createTheme
 */

/*!
 * Constructs a CreateThemeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateThemeResponse::CreateThemeResponse(
        const CreateThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateThemeResponsePrivate(this), parent)
{
    setRequest(new CreateThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateThemeRequest * CreateThemeResponse::request() const
{
    Q_D(const CreateThemeResponse);
    return static_cast<const CreateThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateTheme \a response.
 */
void CreateThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateThemeResponsePrivate
 * \brief The CreateThemeResponsePrivate class provides private implementation for CreateThemeResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateThemeResponsePrivate object with public implementation \a q.
 */
CreateThemeResponsePrivate::CreateThemeResponsePrivate(
    CreateThemeResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateTheme response element from \a xml.
 */
void CreateThemeResponsePrivate::parseCreateThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
