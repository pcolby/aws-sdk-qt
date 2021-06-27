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

#include "deletekeygroupresponse.h"
#include "deletekeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupResponse
 * \brief The DeleteKeyGroupResponse class provides an interace for CloudFront DeleteKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteKeyGroup
 */

/*!
 * Constructs a DeleteKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteKeyGroupResponse::DeleteKeyGroupResponse(
        const DeleteKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteKeyGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteKeyGroupRequest * DeleteKeyGroupResponse::request() const
{
    return static_cast<const DeleteKeyGroupRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteKeyGroup \a response.
 */
void DeleteKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupResponsePrivate
 * \brief The DeleteKeyGroupResponsePrivate class provides private implementation for DeleteKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteKeyGroupResponsePrivate object with public implementation \a q.
 */
DeleteKeyGroupResponsePrivate::DeleteKeyGroupResponsePrivate(
    DeleteKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteKeyGroup response element from \a xml.
 */
void DeleteKeyGroupResponsePrivate::parseDeleteKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
