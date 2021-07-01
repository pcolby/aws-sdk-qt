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

#include "tagsamlproviderresponse.h"
#include "tagsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::TagSAMLProviderResponse
 * \brief The TagSAMLProviderResponse class provides an interace for IAM TagSAMLProvider responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::tagSAMLProvider
 */

/*!
 * Constructs a TagSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
TagSAMLProviderResponse::TagSAMLProviderResponse(
        const TagSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new TagSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagSAMLProviderRequest * TagSAMLProviderResponse::request() const
{
    Q_D(const TagSAMLProviderResponse);
    return static_cast<const TagSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM TagSAMLProvider \a response.
 */
void TagSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::TagSAMLProviderResponsePrivate
 * \brief The TagSAMLProviderResponsePrivate class provides private implementation for TagSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a TagSAMLProviderResponsePrivate object with public implementation \a q.
 */
TagSAMLProviderResponsePrivate::TagSAMLProviderResponsePrivate(
    TagSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM TagSAMLProvider response element from \a xml.
 */
void TagSAMLProviderResponsePrivate::parseTagSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
