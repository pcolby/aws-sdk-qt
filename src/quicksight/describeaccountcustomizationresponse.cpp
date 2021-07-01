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

#include "describeaccountcustomizationresponse.h"
#include "describeaccountcustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountCustomizationResponse
 * \brief The DescribeAccountCustomizationResponse class provides an interace for QuickSight DescribeAccountCustomization responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountCustomization
 */

/*!
 * Constructs a DescribeAccountCustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountCustomizationResponse::DescribeAccountCustomizationResponse(
        const DescribeAccountCustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeAccountCustomizationResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountCustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountCustomizationRequest * DescribeAccountCustomizationResponse::request() const
{
    Q_D(const DescribeAccountCustomizationResponse);
    return static_cast<const DescribeAccountCustomizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeAccountCustomization \a response.
 */
void DescribeAccountCustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountCustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeAccountCustomizationResponsePrivate
 * \brief The DescribeAccountCustomizationResponsePrivate class provides private implementation for DescribeAccountCustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountCustomizationResponsePrivate object with public implementation \a q.
 */
DescribeAccountCustomizationResponsePrivate::DescribeAccountCustomizationResponsePrivate(
    DescribeAccountCustomizationResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeAccountCustomization response element from \a xml.
 */
void DescribeAccountCustomizationResponsePrivate::parseDescribeAccountCustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountCustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
