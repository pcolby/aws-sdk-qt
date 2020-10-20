/*
    Copyright 2013-2020 Paul Colby

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

#include "listfieldlevelencryptionconfigsresponse.h"
#include "listfieldlevelencryptionconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsResponse
 * \brief The ListFieldLevelEncryptionConfigsResponse class provides an interace for CloudFront ListFieldLevelEncryptionConfigs responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionConfigs
 */

/*!
 * Constructs a ListFieldLevelEncryptionConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFieldLevelEncryptionConfigsResponse::ListFieldLevelEncryptionConfigsResponse(
        const ListFieldLevelEncryptionConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListFieldLevelEncryptionConfigsResponsePrivate(this), parent)
{
    setRequest(new ListFieldLevelEncryptionConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFieldLevelEncryptionConfigsRequest * ListFieldLevelEncryptionConfigsResponse::request() const
{
    Q_D(const ListFieldLevelEncryptionConfigsResponse);
    return static_cast<const ListFieldLevelEncryptionConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListFieldLevelEncryptionConfigs \a response.
 */
void ListFieldLevelEncryptionConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFieldLevelEncryptionConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsResponsePrivate
 * \brief The ListFieldLevelEncryptionConfigsResponsePrivate class provides private implementation for ListFieldLevelEncryptionConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListFieldLevelEncryptionConfigsResponsePrivate object with public implementation \a q.
 */
ListFieldLevelEncryptionConfigsResponsePrivate::ListFieldLevelEncryptionConfigsResponsePrivate(
    ListFieldLevelEncryptionConfigsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListFieldLevelEncryptionConfigs response element from \a xml.
 */
void ListFieldLevelEncryptionConfigsResponsePrivate::parseListFieldLevelEncryptionConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFieldLevelEncryptionConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
