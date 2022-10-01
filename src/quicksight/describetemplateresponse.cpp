// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetemplateresponse.h"
#include "describetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplateResponse
 * \brief The DescribeTemplateResponse class provides an interace for QuickSight DescribeTemplate responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplate
 */

/*!
 * Constructs a DescribeTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTemplateResponse::DescribeTemplateResponse(
        const DescribeTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeTemplateResponsePrivate(this), parent)
{
    setRequest(new DescribeTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTemplateRequest * DescribeTemplateResponse::request() const
{
    Q_D(const DescribeTemplateResponse);
    return static_cast<const DescribeTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeTemplate \a response.
 */
void DescribeTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeTemplateResponsePrivate
 * \brief The DescribeTemplateResponsePrivate class provides private implementation for DescribeTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplateResponsePrivate object with public implementation \a q.
 */
DescribeTemplateResponsePrivate::DescribeTemplateResponsePrivate(
    DescribeTemplateResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeTemplate response element from \a xml.
 */
void DescribeTemplateResponsePrivate::parseDescribeTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
