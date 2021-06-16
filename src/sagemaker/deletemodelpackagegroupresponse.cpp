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

#include "deletemodelpackagegroupresponse.h"
#include "deletemodelpackagegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupResponse
 * \brief The DeleteModelPackageGroupResponse class provides an interace for SageMaker DeleteModelPackageGroup responses.
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
 * \sa SageMakerClient::deleteModelPackageGroup
 */

/*!
 * Constructs a DeleteModelPackageGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelPackageGroupResponse::DeleteModelPackageGroupResponse(
        const DeleteModelPackageGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteModelPackageGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteModelPackageGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelPackageGroupRequest * DeleteModelPackageGroupResponse::request() const
{
    Q_D(const DeleteModelPackageGroupResponse);
    return static_cast<const DeleteModelPackageGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteModelPackageGroup \a response.
 */
void DeleteModelPackageGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelPackageGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupResponsePrivate
 * \brief The DeleteModelPackageGroupResponsePrivate class provides private implementation for DeleteModelPackageGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageGroupResponsePrivate object with public implementation \a q.
 */
DeleteModelPackageGroupResponsePrivate::DeleteModelPackageGroupResponsePrivate(
    DeleteModelPackageGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteModelPackageGroup response element from \a xml.
 */
void DeleteModelPackageGroupResponsePrivate::parseDeleteModelPackageGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelPackageGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
