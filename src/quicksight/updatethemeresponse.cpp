// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethemeresponse.h"
#include "updatethemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateThemeResponse
 * \brief The UpdateThemeResponse class provides an interace for QuickSight UpdateTheme responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTheme
 */

/*!
 * Constructs a UpdateThemeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThemeResponse::UpdateThemeResponse(
        const UpdateThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateThemeResponsePrivate(this), parent)
{
    setRequest(new UpdateThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThemeRequest * UpdateThemeResponse::request() const
{
    Q_D(const UpdateThemeResponse);
    return static_cast<const UpdateThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateTheme \a response.
 */
void UpdateThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateThemeResponsePrivate
 * \brief The UpdateThemeResponsePrivate class provides private implementation for UpdateThemeResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateThemeResponsePrivate object with public implementation \a q.
 */
UpdateThemeResponsePrivate::UpdateThemeResponsePrivate(
    UpdateThemeResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateTheme response element from \a xml.
 */
void UpdateThemeResponsePrivate::parseUpdateThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
