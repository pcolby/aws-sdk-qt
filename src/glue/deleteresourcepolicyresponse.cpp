/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteresourcepolicyresponse.h"
#include "deleteresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteResourcePolicyResponse
 * \brief The DeleteResourcePolicyResponse class provides an interace for Glue DeleteResourcePolicy responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteResourcePolicy
 */

/*!
 * Constructs a DeleteResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourcePolicyResponse::DeleteResourcePolicyResponse(
        const DeleteResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourcePolicyRequest * DeleteResourcePolicyResponse::request() const
{
    Q_D(const DeleteResourcePolicyResponse);
    return static_cast<const DeleteResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteResourcePolicy \a response.
 */
void DeleteResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteResourcePolicyResponsePrivate
 * \brief The DeleteResourcePolicyResponsePrivate class provides private implementation for DeleteResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteResourcePolicyResponsePrivate object with public implementation \a q.
 */
DeleteResourcePolicyResponsePrivate::DeleteResourcePolicyResponsePrivate(
    DeleteResourcePolicyResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteResourcePolicy response element from \a xml.
 */
void DeleteResourcePolicyResponsePrivate::parseDeleteResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
