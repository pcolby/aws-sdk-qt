// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkteamresponse.h"
#include "describeworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkteamResponse
 * \brief The DescribeWorkteamResponse class provides an interace for SageMaker DescribeWorkteam responses.
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
 * \sa SageMakerClient::describeWorkteam
 */

/*!
 * Constructs a DescribeWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkteamResponse::DescribeWorkteamResponse(
        const DescribeWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeWorkteamResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkteamRequest * DescribeWorkteamResponse::request() const
{
    Q_D(const DescribeWorkteamResponse);
    return static_cast<const DescribeWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeWorkteam \a response.
 */
void DescribeWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeWorkteamResponsePrivate
 * \brief The DescribeWorkteamResponsePrivate class provides private implementation for DescribeWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkteamResponsePrivate object with public implementation \a q.
 */
DescribeWorkteamResponsePrivate::DescribeWorkteamResponsePrivate(
    DescribeWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeWorkteam response element from \a xml.
 */
void DescribeWorkteamResponsePrivate::parseDescribeWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
