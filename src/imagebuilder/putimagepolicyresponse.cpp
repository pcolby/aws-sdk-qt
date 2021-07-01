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

#include "putimagepolicyresponse.h"
#include "putimagepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutImagePolicyResponse
 * \brief The PutImagePolicyResponse class provides an interace for imagebuilder PutImagePolicy responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putImagePolicy
 */

/*!
 * Constructs a PutImagePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutImagePolicyResponse::PutImagePolicyResponse(
        const PutImagePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new PutImagePolicyResponsePrivate(this), parent)
{
    setRequest(new PutImagePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImagePolicyRequest * PutImagePolicyResponse::request() const
{
    Q_D(const PutImagePolicyResponse);
    return static_cast<const PutImagePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder PutImagePolicy \a response.
 */
void PutImagePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImagePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::PutImagePolicyResponsePrivate
 * \brief The PutImagePolicyResponsePrivate class provides private implementation for PutImagePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutImagePolicyResponsePrivate object with public implementation \a q.
 */
PutImagePolicyResponsePrivate::PutImagePolicyResponsePrivate(
    PutImagePolicyResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder PutImagePolicy response element from \a xml.
 */
void PutImagePolicyResponsePrivate::parsePutImagePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImagePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
