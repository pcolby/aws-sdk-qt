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

#include "putcontainerrecipepolicyresponse.h"
#include "putcontainerrecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutContainerRecipePolicyResponse
 * \brief The PutContainerRecipePolicyResponse class provides an interace for imagebuilder PutContainerRecipePolicy responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putContainerRecipePolicy
 */

/*!
 * Constructs a PutContainerRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutContainerRecipePolicyResponse::PutContainerRecipePolicyResponse(
        const PutContainerRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new PutContainerRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new PutContainerRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutContainerRecipePolicyRequest * PutContainerRecipePolicyResponse::request() const
{
    return static_cast<const PutContainerRecipePolicyRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder PutContainerRecipePolicy \a response.
 */
void PutContainerRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutContainerRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::PutContainerRecipePolicyResponsePrivate
 * \brief The PutContainerRecipePolicyResponsePrivate class provides private implementation for PutContainerRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutContainerRecipePolicyResponsePrivate object with public implementation \a q.
 */
PutContainerRecipePolicyResponsePrivate::PutContainerRecipePolicyResponsePrivate(
    PutContainerRecipePolicyResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder PutContainerRecipePolicy response element from \a xml.
 */
void PutContainerRecipePolicyResponsePrivate::parsePutContainerRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContainerRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
