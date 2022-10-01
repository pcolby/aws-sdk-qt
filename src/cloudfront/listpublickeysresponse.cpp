// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpublickeysresponse.h"
#include "listpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListPublicKeysResponse
 * \brief The ListPublicKeysResponse class provides an interace for CloudFront ListPublicKeys responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listPublicKeys
 */

/*!
 * Constructs a ListPublicKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListPublicKeysResponse::ListPublicKeysResponse(
        const ListPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListPublicKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPublicKeysRequest * ListPublicKeysResponse::request() const
{
    Q_D(const ListPublicKeysResponse);
    return static_cast<const ListPublicKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListPublicKeys \a response.
 */
void ListPublicKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPublicKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListPublicKeysResponsePrivate
 * \brief The ListPublicKeysResponsePrivate class provides private implementation for ListPublicKeysResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListPublicKeysResponsePrivate object with public implementation \a q.
 */
ListPublicKeysResponsePrivate::ListPublicKeysResponsePrivate(
    ListPublicKeysResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListPublicKeys response element from \a xml.
 */
void ListPublicKeysResponsePrivate::parseListPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublicKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
