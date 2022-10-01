// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethemeresponse.h"
#include "describethemeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemeResponse
 * \brief The DescribeThemeResponse class provides an interace for QuickSight DescribeTheme responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTheme
 */

/*!
 * Constructs a DescribeThemeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThemeResponse::DescribeThemeResponse(
        const DescribeThemeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeThemeResponsePrivate(this), parent)
{
    setRequest(new DescribeThemeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThemeRequest * DescribeThemeResponse::request() const
{
    Q_D(const DescribeThemeResponse);
    return static_cast<const DescribeThemeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeTheme \a response.
 */
void DescribeThemeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThemeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeThemeResponsePrivate
 * \brief The DescribeThemeResponsePrivate class provides private implementation for DescribeThemeResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemeResponsePrivate object with public implementation \a q.
 */
DescribeThemeResponsePrivate::DescribeThemeResponsePrivate(
    DescribeThemeResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeTheme response element from \a xml.
 */
void DescribeThemeResponsePrivate::parseDescribeThemeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThemeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
