// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehumantaskuiresponse.h"
#include "describehumantaskuiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeHumanTaskUiResponse
 * \brief The DescribeHumanTaskUiResponse class provides an interace for SageMaker DescribeHumanTaskUi responses.
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
 * \sa SageMakerClient::describeHumanTaskUi
 */

/*!
 * Constructs a DescribeHumanTaskUiResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHumanTaskUiResponse::DescribeHumanTaskUiResponse(
        const DescribeHumanTaskUiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeHumanTaskUiResponsePrivate(this), parent)
{
    setRequest(new DescribeHumanTaskUiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHumanTaskUiRequest * DescribeHumanTaskUiResponse::request() const
{
    Q_D(const DescribeHumanTaskUiResponse);
    return static_cast<const DescribeHumanTaskUiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeHumanTaskUi \a response.
 */
void DescribeHumanTaskUiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHumanTaskUiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeHumanTaskUiResponsePrivate
 * \brief The DescribeHumanTaskUiResponsePrivate class provides private implementation for DescribeHumanTaskUiResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeHumanTaskUiResponsePrivate object with public implementation \a q.
 */
DescribeHumanTaskUiResponsePrivate::DescribeHumanTaskUiResponsePrivate(
    DescribeHumanTaskUiResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeHumanTaskUi response element from \a xml.
 */
void DescribeHumanTaskUiResponsePrivate::parseDescribeHumanTaskUiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHumanTaskUiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
