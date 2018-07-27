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

#include "listfieldlevelencryptionprofilesresponse.h"
#include "listfieldlevelencryptionprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionProfilesResponse
 * \brief The ListFieldLevelEncryptionProfilesResponse class provides an interace for CloudFront ListFieldLevelEncryptionProfiles responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionProfiles
 */

/*!
 * Constructs a ListFieldLevelEncryptionProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListFieldLevelEncryptionProfilesResponse::ListFieldLevelEncryptionProfilesResponse(
        const ListFieldLevelEncryptionProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListFieldLevelEncryptionProfilesResponsePrivate(this), parent)
{
    setRequest(new ListFieldLevelEncryptionProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFieldLevelEncryptionProfilesRequest * ListFieldLevelEncryptionProfilesResponse::request() const
{
    Q_D(const ListFieldLevelEncryptionProfilesResponse);
    return static_cast<const ListFieldLevelEncryptionProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListFieldLevelEncryptionProfiles \a response.
 */
void ListFieldLevelEncryptionProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFieldLevelEncryptionProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionProfilesResponsePrivate
 * \brief The ListFieldLevelEncryptionProfilesResponsePrivate class provides private implementation for ListFieldLevelEncryptionProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListFieldLevelEncryptionProfilesResponsePrivate object with public implementation \a q.
 */
ListFieldLevelEncryptionProfilesResponsePrivate::ListFieldLevelEncryptionProfilesResponsePrivate(
    ListFieldLevelEncryptionProfilesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListFieldLevelEncryptionProfiles response element from \a xml.
 */
void ListFieldLevelEncryptionProfilesResponsePrivate::parseListFieldLevelEncryptionProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFieldLevelEncryptionProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
