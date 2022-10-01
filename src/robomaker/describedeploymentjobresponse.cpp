// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedeploymentjobresponse.h"
#include "describedeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeDeploymentJobResponse
 * \brief The DescribeDeploymentJobResponse class provides an interace for RoboMaker DescribeDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeDeploymentJob
 */

/*!
 * Constructs a DescribeDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeploymentJobResponse::DescribeDeploymentJobResponse(
        const DescribeDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeploymentJobRequest * DescribeDeploymentJobResponse::request() const
{
    Q_D(const DescribeDeploymentJobResponse);
    return static_cast<const DescribeDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeDeploymentJob \a response.
 */
void DescribeDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeDeploymentJobResponsePrivate
 * \brief The DescribeDeploymentJobResponsePrivate class provides private implementation for DescribeDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeDeploymentJobResponsePrivate object with public implementation \a q.
 */
DescribeDeploymentJobResponsePrivate::DescribeDeploymentJobResponsePrivate(
    DescribeDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeDeploymentJob response element from \a xml.
 */
void DescribeDeploymentJobResponsePrivate::parseDescribeDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
