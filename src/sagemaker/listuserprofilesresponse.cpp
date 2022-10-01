// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserprofilesresponse.h"
#include "listuserprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListUserProfilesResponse
 * \brief The ListUserProfilesResponse class provides an interace for SageMaker ListUserProfiles responses.
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
 * \sa SageMakerClient::listUserProfiles
 */

/*!
 * Constructs a ListUserProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserProfilesResponse::ListUserProfilesResponse(
        const ListUserProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListUserProfilesResponsePrivate(this), parent)
{
    setRequest(new ListUserProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserProfilesRequest * ListUserProfilesResponse::request() const
{
    Q_D(const ListUserProfilesResponse);
    return static_cast<const ListUserProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListUserProfiles \a response.
 */
void ListUserProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListUserProfilesResponsePrivate
 * \brief The ListUserProfilesResponsePrivate class provides private implementation for ListUserProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListUserProfilesResponsePrivate object with public implementation \a q.
 */
ListUserProfilesResponsePrivate::ListUserProfilesResponsePrivate(
    ListUserProfilesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListUserProfiles response element from \a xml.
 */
void ListUserProfilesResponsePrivate::parseListUserProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
