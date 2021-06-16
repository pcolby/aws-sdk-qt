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

#include "createoriginrequestpolicyresponse.h"
#include "createoriginrequestpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateOriginRequestPolicyResponse
 * \brief The CreateOriginRequestPolicyResponse class provides an interace for CloudFront CreateOriginRequestPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createOriginRequestPolicy
 */

/*!
 * Constructs a CreateOriginRequestPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOriginRequestPolicyResponse::CreateOriginRequestPolicyResponse(
        const CreateOriginRequestPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateOriginRequestPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateOriginRequestPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOriginRequestPolicyRequest * CreateOriginRequestPolicyResponse::request() const
{
    Q_D(const CreateOriginRequestPolicyResponse);
    return static_cast<const CreateOriginRequestPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateOriginRequestPolicy \a response.
 */
void CreateOriginRequestPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOriginRequestPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateOriginRequestPolicyResponsePrivate
 * \brief The CreateOriginRequestPolicyResponsePrivate class provides private implementation for CreateOriginRequestPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateOriginRequestPolicyResponsePrivate object with public implementation \a q.
 */
CreateOriginRequestPolicyResponsePrivate::CreateOriginRequestPolicyResponsePrivate(
    CreateOriginRequestPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateOriginRequestPolicy response element from \a xml.
 */
void CreateOriginRequestPolicyResponsePrivate::parseCreateOriginRequestPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOriginRequestPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
