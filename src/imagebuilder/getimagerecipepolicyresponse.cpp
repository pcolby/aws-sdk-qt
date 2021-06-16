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

#include "getimagerecipepolicyresponse.h"
#include "getimagerecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetImageRecipePolicyResponse
 * \brief The GetImageRecipePolicyResponse class provides an interace for imagebuilder GetImageRecipePolicy responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getImageRecipePolicy
 */

/*!
 * Constructs a GetImageRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetImageRecipePolicyResponse::GetImageRecipePolicyResponse(
        const GetImageRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new GetImageRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new GetImageRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImageRecipePolicyRequest * GetImageRecipePolicyResponse::request() const
{
    Q_D(const GetImageRecipePolicyResponse);
    return static_cast<const GetImageRecipePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder GetImageRecipePolicy \a response.
 */
void GetImageRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImageRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::GetImageRecipePolicyResponsePrivate
 * \brief The GetImageRecipePolicyResponsePrivate class provides private implementation for GetImageRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetImageRecipePolicyResponsePrivate object with public implementation \a q.
 */
GetImageRecipePolicyResponsePrivate::GetImageRecipePolicyResponsePrivate(
    GetImageRecipePolicyResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder GetImageRecipePolicy response element from \a xml.
 */
void GetImageRecipePolicyResponsePrivate::parseGetImageRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImageRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
