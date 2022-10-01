// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
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
