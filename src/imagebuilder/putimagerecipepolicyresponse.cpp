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

#include "putimagerecipepolicyresponse.h"
#include "putimagerecipepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutImageRecipePolicyResponse
 * \brief The PutImageRecipePolicyResponse class provides an interace for imagebuilder PutImageRecipePolicy responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putImageRecipePolicy
 */

/*!
 * Constructs a PutImageRecipePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutImageRecipePolicyResponse::PutImageRecipePolicyResponse(
        const PutImageRecipePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new PutImageRecipePolicyResponsePrivate(this), parent)
{
    setRequest(new PutImageRecipePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImageRecipePolicyRequest * PutImageRecipePolicyResponse::request() const
{
    Q_D(const PutImageRecipePolicyResponse);
    return static_cast<const PutImageRecipePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder PutImageRecipePolicy \a response.
 */
void PutImageRecipePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageRecipePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::PutImageRecipePolicyResponsePrivate
 * \brief The PutImageRecipePolicyResponsePrivate class provides private implementation for PutImageRecipePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutImageRecipePolicyResponsePrivate object with public implementation \a q.
 */
PutImageRecipePolicyResponsePrivate::PutImageRecipePolicyResponsePrivate(
    PutImageRecipePolicyResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder PutImageRecipePolicy response element from \a xml.
 */
void PutImageRecipePolicyResponsePrivate::parsePutImageRecipePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageRecipePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
