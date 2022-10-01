// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetabledataimportjobresponse.h"
#include "describetabledataimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::DescribeTableDataImportJobResponse
 * \brief The DescribeTableDataImportJobResponse class provides an interace for Honeycode DescribeTableDataImportJob responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::describeTableDataImportJob
 */

/*!
 * Constructs a DescribeTableDataImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTableDataImportJobResponse::DescribeTableDataImportJobResponse(
        const DescribeTableDataImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new DescribeTableDataImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTableDataImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTableDataImportJobRequest * DescribeTableDataImportJobResponse::request() const
{
    Q_D(const DescribeTableDataImportJobResponse);
    return static_cast<const DescribeTableDataImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode DescribeTableDataImportJob \a response.
 */
void DescribeTableDataImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTableDataImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::DescribeTableDataImportJobResponsePrivate
 * \brief The DescribeTableDataImportJobResponsePrivate class provides private implementation for DescribeTableDataImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a DescribeTableDataImportJobResponsePrivate object with public implementation \a q.
 */
DescribeTableDataImportJobResponsePrivate::DescribeTableDataImportJobResponsePrivate(
    DescribeTableDataImportJobResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode DescribeTableDataImportJob response element from \a xml.
 */
void DescribeTableDataImportJobResponsePrivate::parseDescribeTableDataImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableDataImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
