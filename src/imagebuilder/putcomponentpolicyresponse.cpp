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

#include "putcomponentpolicyresponse.h"
#include "putcomponentpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutComponentPolicyResponse
 * \brief The PutComponentPolicyResponse class provides an interace for imagebuilder PutComponentPolicy responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putComponentPolicy
 */

/*!
 * Constructs a PutComponentPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutComponentPolicyResponse::PutComponentPolicyResponse(
        const PutComponentPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new PutComponentPolicyResponsePrivate(this), parent)
{
    setRequest(new PutComponentPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutComponentPolicyRequest * PutComponentPolicyResponse::request() const
{
    Q_D(const PutComponentPolicyResponse);
    return static_cast<const PutComponentPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder PutComponentPolicy \a response.
 */
void PutComponentPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutComponentPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::PutComponentPolicyResponsePrivate
 * \brief The PutComponentPolicyResponsePrivate class provides private implementation for PutComponentPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutComponentPolicyResponsePrivate object with public implementation \a q.
 */
PutComponentPolicyResponsePrivate::PutComponentPolicyResponsePrivate(
    PutComponentPolicyResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder PutComponentPolicy response element from \a xml.
 */
void PutComponentPolicyResponsePrivate::parsePutComponentPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutComponentPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
