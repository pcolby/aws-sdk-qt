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
