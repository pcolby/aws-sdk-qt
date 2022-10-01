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

#include "getimagepolicyresponse.h"
#include "getimagepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImagePolicyResponse
 * \brief The GetImagePolicyResponse class provides an interace for ImageBuilder GetImagePolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImagePolicy
 */

/*!
 * Constructs a GetImagePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetImagePolicyResponse::GetImagePolicyResponse(
        const GetImagePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetImagePolicyResponsePrivate(this), parent)
{
    setRequest(new GetImagePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImagePolicyRequest * GetImagePolicyResponse::request() const
{
    Q_D(const GetImagePolicyResponse);
    return static_cast<const GetImagePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetImagePolicy \a response.
 */
void GetImagePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImagePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetImagePolicyResponsePrivate
 * \brief The GetImagePolicyResponsePrivate class provides private implementation for GetImagePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImagePolicyResponsePrivate object with public implementation \a q.
 */
GetImagePolicyResponsePrivate::GetImagePolicyResponsePrivate(
    GetImagePolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetImagePolicy response element from \a xml.
 */
void GetImagePolicyResponsePrivate::parseGetImagePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImagePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
