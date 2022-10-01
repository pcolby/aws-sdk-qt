// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserprofileresponse.h"
#include "deleteuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteUserProfileResponse
 * \brief The DeleteUserProfileResponse class provides an interace for SageMaker DeleteUserProfile responses.
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
 * \sa SageMakerClient::deleteUserProfile
 */

/*!
 * Constructs a DeleteUserProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserProfileResponse::DeleteUserProfileResponse(
        const DeleteUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteUserProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteUserProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserProfileRequest * DeleteUserProfileResponse::request() const
{
    Q_D(const DeleteUserProfileResponse);
    return static_cast<const DeleteUserProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteUserProfile \a response.
 */
void DeleteUserProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteUserProfileResponsePrivate
 * \brief The DeleteUserProfileResponsePrivate class provides private implementation for DeleteUserProfileResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteUserProfileResponsePrivate object with public implementation \a q.
 */
DeleteUserProfileResponsePrivate::DeleteUserProfileResponsePrivate(
    DeleteUserProfileResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteUserProfile response element from \a xml.
 */
void DeleteUserProfileResponsePrivate::parseDeleteUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
