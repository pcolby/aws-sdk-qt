// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethemealiasresponse.h"
#include "describethemealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemeAliasResponse
 * \brief The DescribeThemeAliasResponse class provides an interace for QuickSight DescribeThemeAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeThemeAlias
 */

/*!
 * Constructs a DescribeThemeAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThemeAliasResponse::DescribeThemeAliasResponse(
        const DescribeThemeAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeThemeAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeThemeAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThemeAliasRequest * DescribeThemeAliasResponse::request() const
{
    Q_D(const DescribeThemeAliasResponse);
    return static_cast<const DescribeThemeAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeThemeAlias \a response.
 */
void DescribeThemeAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThemeAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeThemeAliasResponsePrivate
 * \brief The DescribeThemeAliasResponsePrivate class provides private implementation for DescribeThemeAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemeAliasResponsePrivate object with public implementation \a q.
 */
DescribeThemeAliasResponsePrivate::DescribeThemeAliasResponsePrivate(
    DescribeThemeAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeThemeAlias response element from \a xml.
 */
void DescribeThemeAliasResponsePrivate::parseDescribeThemeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThemeAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
