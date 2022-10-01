// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
