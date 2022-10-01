// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetemplatealiasresponse.h"
#include "describetemplatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplateAliasResponse
 * \brief The DescribeTemplateAliasResponse class provides an interace for QuickSight DescribeTemplateAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplateAlias
 */

/*!
 * Constructs a DescribeTemplateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTemplateAliasResponse::DescribeTemplateAliasResponse(
        const DescribeTemplateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeTemplateAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeTemplateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTemplateAliasRequest * DescribeTemplateAliasResponse::request() const
{
    Q_D(const DescribeTemplateAliasResponse);
    return static_cast<const DescribeTemplateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeTemplateAlias \a response.
 */
void DescribeTemplateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTemplateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeTemplateAliasResponsePrivate
 * \brief The DescribeTemplateAliasResponsePrivate class provides private implementation for DescribeTemplateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplateAliasResponsePrivate object with public implementation \a q.
 */
DescribeTemplateAliasResponsePrivate::DescribeTemplateAliasResponsePrivate(
    DescribeTemplateAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeTemplateAlias response element from \a xml.
 */
void DescribeTemplateAliasResponsePrivate::parseDescribeTemplateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTemplateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
