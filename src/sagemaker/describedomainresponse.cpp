// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainresponse.h"
#include "describedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeDomainResponse
 * \brief The DescribeDomainResponse class provides an interace for SageMaker DescribeDomain responses.
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
 * \sa SageMakerClient::describeDomain
 */

/*!
 * Constructs a DescribeDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainResponse::DescribeDomainResponse(
        const DescribeDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainRequest * DescribeDomainResponse::request() const
{
    Q_D(const DescribeDomainResponse);
    return static_cast<const DescribeDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeDomain \a response.
 */
void DescribeDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeDomainResponsePrivate
 * \brief The DescribeDomainResponsePrivate class provides private implementation for DescribeDomainResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeDomainResponsePrivate object with public implementation \a q.
 */
DescribeDomainResponsePrivate::DescribeDomainResponsePrivate(
    DescribeDomainResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeDomain response element from \a xml.
 */
void DescribeDomainResponsePrivate::parseDescribeDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
