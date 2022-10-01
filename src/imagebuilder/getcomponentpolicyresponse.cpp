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

#include "getcomponentpolicyresponse.h"
#include "getcomponentpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyResponse
 * \brief The GetComponentPolicyResponse class provides an interace for ImageBuilder GetComponentPolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getComponentPolicy
 */

/*!
 * Constructs a GetComponentPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetComponentPolicyResponse::GetComponentPolicyResponse(
        const GetComponentPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetComponentPolicyResponsePrivate(this), parent)
{
    setRequest(new GetComponentPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComponentPolicyRequest * GetComponentPolicyResponse::request() const
{
    Q_D(const GetComponentPolicyResponse);
    return static_cast<const GetComponentPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetComponentPolicy \a response.
 */
void GetComponentPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComponentPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyResponsePrivate
 * \brief The GetComponentPolicyResponsePrivate class provides private implementation for GetComponentPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetComponentPolicyResponsePrivate object with public implementation \a q.
 */
GetComponentPolicyResponsePrivate::GetComponentPolicyResponsePrivate(
    GetComponentPolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetComponentPolicy response element from \a xml.
 */
void GetComponentPolicyResponsePrivate::parseGetComponentPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComponentPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
