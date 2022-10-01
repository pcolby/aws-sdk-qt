// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethemeresponse.h"
#include "deletethemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteThemeResponse
 * \brief The DeleteThemeResponse class provides an interace for QuickSight DeleteTheme responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTheme
 */

/*!
 * Constructs a DeleteThemeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThemeResponse::DeleteThemeResponse(
        const DeleteThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteThemeResponsePrivate(this), parent)
{
    setRequest(new DeleteThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThemeRequest * DeleteThemeResponse::request() const
{
    Q_D(const DeleteThemeResponse);
    return static_cast<const DeleteThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteTheme \a response.
 */
void DeleteThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteThemeResponsePrivate
 * \brief The DeleteThemeResponsePrivate class provides private implementation for DeleteThemeResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteThemeResponsePrivate object with public implementation \a q.
 */
DeleteThemeResponsePrivate::DeleteThemeResponsePrivate(
    DeleteThemeResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteTheme response element from \a xml.
 */
void DeleteThemeResponsePrivate::parseDeleteThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
