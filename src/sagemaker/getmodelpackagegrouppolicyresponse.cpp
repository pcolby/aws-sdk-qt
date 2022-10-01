// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelpackagegrouppolicyresponse.h"
#include "getmodelpackagegrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetModelPackageGroupPolicyResponse
 * \brief The GetModelPackageGroupPolicyResponse class provides an interace for SageMaker GetModelPackageGroupPolicy responses.
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
 * \sa SageMakerClient::getModelPackageGroupPolicy
 */

/*!
 * Constructs a GetModelPackageGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetModelPackageGroupPolicyResponse::GetModelPackageGroupPolicyResponse(
        const GetModelPackageGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new GetModelPackageGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new GetModelPackageGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetModelPackageGroupPolicyRequest * GetModelPackageGroupPolicyResponse::request() const
{
    Q_D(const GetModelPackageGroupPolicyResponse);
    return static_cast<const GetModelPackageGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker GetModelPackageGroupPolicy \a response.
 */
void GetModelPackageGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetModelPackageGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::GetModelPackageGroupPolicyResponsePrivate
 * \brief The GetModelPackageGroupPolicyResponsePrivate class provides private implementation for GetModelPackageGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetModelPackageGroupPolicyResponsePrivate object with public implementation \a q.
 */
GetModelPackageGroupPolicyResponsePrivate::GetModelPackageGroupPolicyResponsePrivate(
    GetModelPackageGroupPolicyResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker GetModelPackageGroupPolicy response element from \a xml.
 */
void GetModelPackageGroupPolicyResponsePrivate::parseGetModelPackageGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelPackageGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
