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
