// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldgenerationjobresponse.h"
#include "describeworldgenerationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobResponse
 * \brief The DescribeWorldGenerationJobResponse class provides an interace for RoboMaker DescribeWorldGenerationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldGenerationJob
 */

/*!
 * Constructs a DescribeWorldGenerationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldGenerationJobResponse::DescribeWorldGenerationJobResponse(
        const DescribeWorldGenerationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldGenerationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldGenerationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldGenerationJobRequest * DescribeWorldGenerationJobResponse::request() const
{
    Q_D(const DescribeWorldGenerationJobResponse);
    return static_cast<const DescribeWorldGenerationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorldGenerationJob \a response.
 */
void DescribeWorldGenerationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldGenerationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobResponsePrivate
 * \brief The DescribeWorldGenerationJobResponsePrivate class provides private implementation for DescribeWorldGenerationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldGenerationJobResponsePrivate object with public implementation \a q.
 */
DescribeWorldGenerationJobResponsePrivate::DescribeWorldGenerationJobResponsePrivate(
    DescribeWorldGenerationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorldGenerationJob response element from \a xml.
 */
void DescribeWorldGenerationJobResponsePrivate::parseDescribeWorldGenerationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldGenerationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
