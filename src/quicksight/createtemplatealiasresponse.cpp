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

#include "createtemplatealiasresponse.h"
#include "createtemplatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateTemplateAliasResponse
 * \brief The CreateTemplateAliasResponse class provides an interace for QuickSight CreateTemplateAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createTemplateAlias
 */

/*!
 * Constructs a CreateTemplateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTemplateAliasResponse::CreateTemplateAliasResponse(
        const CreateTemplateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateTemplateAliasResponsePrivate(this), parent)
{
    setRequest(new CreateTemplateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTemplateAliasRequest * CreateTemplateAliasResponse::request() const
{
    Q_D(const CreateTemplateAliasResponse);
    return static_cast<const CreateTemplateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateTemplateAlias \a response.
 */
void CreateTemplateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTemplateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateTemplateAliasResponsePrivate
 * \brief The CreateTemplateAliasResponsePrivate class provides private implementation for CreateTemplateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateTemplateAliasResponsePrivate object with public implementation \a q.
 */
CreateTemplateAliasResponsePrivate::CreateTemplateAliasResponsePrivate(
    CreateTemplateAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateTemplateAlias response element from \a xml.
 */
void CreateTemplateAliasResponsePrivate::parseCreateTemplateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTemplateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
