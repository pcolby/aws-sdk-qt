// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeingestionresponse.h"
#include "describeingestionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIngestionResponse
 * \brief The DescribeIngestionResponse class provides an interace for QuickSight DescribeIngestion responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIngestion
 */

/*!
 * Constructs a DescribeIngestionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIngestionResponse::DescribeIngestionResponse(
        const DescribeIngestionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeIngestionResponsePrivate(this), parent)
{
    setRequest(new DescribeIngestionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIngestionRequest * DescribeIngestionResponse::request() const
{
    Q_D(const DescribeIngestionResponse);
    return static_cast<const DescribeIngestionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeIngestion \a response.
 */
void DescribeIngestionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIngestionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeIngestionResponsePrivate
 * \brief The DescribeIngestionResponsePrivate class provides private implementation for DescribeIngestionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIngestionResponsePrivate object with public implementation \a q.
 */
DescribeIngestionResponsePrivate::DescribeIngestionResponsePrivate(
    DescribeIngestionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeIngestion response element from \a xml.
 */
void DescribeIngestionResponsePrivate::parseDescribeIngestionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIngestionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
