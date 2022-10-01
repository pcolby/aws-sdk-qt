// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldexportjobresponse.h"
#include "describeworldexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldExportJobResponse
 * \brief The DescribeWorldExportJobResponse class provides an interace for RoboMaker DescribeWorldExportJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldExportJob
 */

/*!
 * Constructs a DescribeWorldExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldExportJobResponse::DescribeWorldExportJobResponse(
        const DescribeWorldExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldExportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldExportJobRequest * DescribeWorldExportJobResponse::request() const
{
    Q_D(const DescribeWorldExportJobResponse);
    return static_cast<const DescribeWorldExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorldExportJob \a response.
 */
void DescribeWorldExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldExportJobResponsePrivate
 * \brief The DescribeWorldExportJobResponsePrivate class provides private implementation for DescribeWorldExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldExportJobResponsePrivate object with public implementation \a q.
 */
DescribeWorldExportJobResponsePrivate::DescribeWorldExportJobResponsePrivate(
    DescribeWorldExportJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorldExportJob response element from \a xml.
 */
void DescribeWorldExportJobResponsePrivate::parseDescribeWorldExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
