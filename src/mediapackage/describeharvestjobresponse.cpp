// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeharvestjobresponse.h"
#include "describeharvestjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeHarvestJobResponse
 * \brief The DescribeHarvestJobResponse class provides an interace for MediaPackage DescribeHarvestJob responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeHarvestJob
 */

/*!
 * Constructs a DescribeHarvestJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHarvestJobResponse::DescribeHarvestJobResponse(
        const DescribeHarvestJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DescribeHarvestJobResponsePrivate(this), parent)
{
    setRequest(new DescribeHarvestJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHarvestJobRequest * DescribeHarvestJobResponse::request() const
{
    Q_D(const DescribeHarvestJobResponse);
    return static_cast<const DescribeHarvestJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DescribeHarvestJob \a response.
 */
void DescribeHarvestJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHarvestJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DescribeHarvestJobResponsePrivate
 * \brief The DescribeHarvestJobResponsePrivate class provides private implementation for DescribeHarvestJobResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeHarvestJobResponsePrivate object with public implementation \a q.
 */
DescribeHarvestJobResponsePrivate::DescribeHarvestJobResponsePrivate(
    DescribeHarvestJobResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DescribeHarvestJob response element from \a xml.
 */
void DescribeHarvestJobResponsePrivate::parseDescribeHarvestJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHarvestJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
