// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
