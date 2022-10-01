// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldresponse.h"
#include "describeworldresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldResponse
 * \brief The DescribeWorldResponse class provides an interace for RoboMaker DescribeWorld responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorld
 */

/*!
 * Constructs a DescribeWorldResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorldResponse::DescribeWorldResponse(
        const DescribeWorldRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeWorldResponsePrivate(this), parent)
{
    setRequest(new DescribeWorldRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorldRequest * DescribeWorldResponse::request() const
{
    Q_D(const DescribeWorldResponse);
    return static_cast<const DescribeWorldRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeWorld \a response.
 */
void DescribeWorldResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorldResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldResponsePrivate
 * \brief The DescribeWorldResponsePrivate class provides private implementation for DescribeWorldResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldResponsePrivate object with public implementation \a q.
 */
DescribeWorldResponsePrivate::DescribeWorldResponsePrivate(
    DescribeWorldResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeWorld response element from \a xml.
 */
void DescribeWorldResponsePrivate::parseDescribeWorldResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorldResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
