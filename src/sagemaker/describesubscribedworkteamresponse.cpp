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

#include "describesubscribedworkteamresponse.h"
#include "describesubscribedworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeSubscribedWorkteamResponse
 * \brief The DescribeSubscribedWorkteamResponse class provides an interace for SageMaker DescribeSubscribedWorkteam responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeSubscribedWorkteam
 */

/*!
 * Constructs a DescribeSubscribedWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSubscribedWorkteamResponse::DescribeSubscribedWorkteamResponse(
        const DescribeSubscribedWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeSubscribedWorkteamResponsePrivate(this), parent)
{
    setRequest(new DescribeSubscribedWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSubscribedWorkteamRequest * DescribeSubscribedWorkteamResponse::request() const
{
    Q_D(const DescribeSubscribedWorkteamResponse);
    return static_cast<const DescribeSubscribedWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeSubscribedWorkteam \a response.
 */
void DescribeSubscribedWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSubscribedWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeSubscribedWorkteamResponsePrivate
 * \brief The DescribeSubscribedWorkteamResponsePrivate class provides private implementation for DescribeSubscribedWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeSubscribedWorkteamResponsePrivate object with public implementation \a q.
 */
DescribeSubscribedWorkteamResponsePrivate::DescribeSubscribedWorkteamResponsePrivate(
    DescribeSubscribedWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeSubscribedWorkteam response element from \a xml.
 */
void DescribeSubscribedWorkteamResponsePrivate::parseDescribeSubscribedWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubscribedWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
