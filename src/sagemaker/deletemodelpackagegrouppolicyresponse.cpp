// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelpackagegrouppolicyresponse.h"
#include "deletemodelpackagegrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupPolicyResponse
 * \brief The DeleteModelPackageGroupPolicyResponse class provides an interace for SageMaker DeleteModelPackageGroupPolicy responses.
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
 * \sa SageMakerClient::deleteModelPackageGroupPolicy
 */

/*!
 * Constructs a DeleteModelPackageGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelPackageGroupPolicyResponse::DeleteModelPackageGroupPolicyResponse(
        const DeleteModelPackageGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelPackageGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteModelPackageGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelPackageGroupPolicyRequest * DeleteModelPackageGroupPolicyResponse::request() const
{
    Q_D(const DeleteModelPackageGroupPolicyResponse);
    return static_cast<const DeleteModelPackageGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelPackageGroupPolicy \a response.
 */
void DeleteModelPackageGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelPackageGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupPolicyResponsePrivate
 * \brief The DeleteModelPackageGroupPolicyResponsePrivate class provides private implementation for DeleteModelPackageGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageGroupPolicyResponsePrivate object with public implementation \a q.
 */
DeleteModelPackageGroupPolicyResponsePrivate::DeleteModelPackageGroupPolicyResponsePrivate(
    DeleteModelPackageGroupPolicyResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelPackageGroupPolicy response element from \a xml.
 */
void DeleteModelPackageGroupPolicyResponsePrivate::parseDeleteModelPackageGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelPackageGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
