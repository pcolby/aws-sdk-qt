// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserprofileresponse.h"
#include "updateuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateUserProfileResponse
 * \brief The UpdateUserProfileResponse class provides an interace for SageMaker UpdateUserProfile responses.
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
 * \sa SageMakerClient::updateUserProfile
 */

/*!
 * Constructs a UpdateUserProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserProfileResponse::UpdateUserProfileResponse(
        const UpdateUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateUserProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateUserProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserProfileRequest * UpdateUserProfileResponse::request() const
{
    Q_D(const UpdateUserProfileResponse);
    return static_cast<const UpdateUserProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateUserProfile \a response.
 */
void UpdateUserProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateUserProfileResponsePrivate
 * \brief The UpdateUserProfileResponsePrivate class provides private implementation for UpdateUserProfileResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateUserProfileResponsePrivate object with public implementation \a q.
 */
UpdateUserProfileResponsePrivate::UpdateUserProfileResponsePrivate(
    UpdateUserProfileResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateUserProfile response element from \a xml.
 */
void UpdateUserProfileResponsePrivate::parseUpdateUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
