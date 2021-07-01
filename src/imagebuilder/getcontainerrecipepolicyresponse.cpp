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

#include "getcontainerrecipepolicyresponse.h"
#include "getcontainerrecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetContainerRecipePolicyResponse
 * \brief The GetContainerRecipePolicyResponse class provides an interace for imagebuilder GetContainerRecipePolicy responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getContainerRecipePolicy
 */

/*!
 * Constructs a GetContainerRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContainerRecipePolicyResponse::GetContainerRecipePolicyResponse(
        const GetContainerRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new GetContainerRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new GetContainerRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContainerRecipePolicyRequest * GetContainerRecipePolicyResponse::request() const
{
    Q_D(const GetContainerRecipePolicyResponse);
    return static_cast<const GetContainerRecipePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder GetContainerRecipePolicy \a response.
 */
void GetContainerRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContainerRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::GetContainerRecipePolicyResponsePrivate
 * \brief The GetContainerRecipePolicyResponsePrivate class provides private implementation for GetContainerRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetContainerRecipePolicyResponsePrivate object with public implementation \a q.
 */
GetContainerRecipePolicyResponsePrivate::GetContainerRecipePolicyResponsePrivate(
    GetContainerRecipePolicyResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder GetContainerRecipePolicy response element from \a xml.
 */
void GetContainerRecipePolicyResponsePrivate::parseGetContainerRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContainerRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
