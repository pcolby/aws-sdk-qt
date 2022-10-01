// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmodelpackagegrouppolicyresponse.h"
#include "putmodelpackagegrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::PutModelPackageGroupPolicyResponse
 * \brief The PutModelPackageGroupPolicyResponse class provides an interace for SageMaker PutModelPackageGroupPolicy responses.
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
 * \sa SageMakerClient::putModelPackageGroupPolicy
 */

/*!
 * Constructs a PutModelPackageGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutModelPackageGroupPolicyResponse::PutModelPackageGroupPolicyResponse(
        const PutModelPackageGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new PutModelPackageGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new PutModelPackageGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutModelPackageGroupPolicyRequest * PutModelPackageGroupPolicyResponse::request() const
{
    Q_D(const PutModelPackageGroupPolicyResponse);
    return static_cast<const PutModelPackageGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker PutModelPackageGroupPolicy \a response.
 */
void PutModelPackageGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutModelPackageGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::PutModelPackageGroupPolicyResponsePrivate
 * \brief The PutModelPackageGroupPolicyResponsePrivate class provides private implementation for PutModelPackageGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a PutModelPackageGroupPolicyResponsePrivate object with public implementation \a q.
 */
PutModelPackageGroupPolicyResponsePrivate::PutModelPackageGroupPolicyResponsePrivate(
    PutModelPackageGroupPolicyResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker PutModelPackageGroupPolicy response element from \a xml.
 */
void PutModelPackageGroupPolicyResponsePrivate::parsePutModelPackageGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutModelPackageGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
