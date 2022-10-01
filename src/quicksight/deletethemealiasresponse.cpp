// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
