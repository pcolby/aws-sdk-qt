// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconflictingaliasesresponse.h"
#include "listconflictingaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListConflictingAliasesResponse
 * \brief The ListConflictingAliasesResponse class provides an interace for CloudFront ListConflictingAliases responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listConflictingAliases
 */

/*!
 * Constructs a ListConflictingAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListConflictingAliasesResponse::ListConflictingAliasesResponse(
        const ListConflictingAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListConflictingAliasesResponsePrivate(this), parent)
{
    setRequest(new ListConflictingAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConflictingAliasesRequest * ListConflictingAliasesResponse::request() const
{
    Q_D(const ListConflictingAliasesResponse);
    return static_cast<const ListConflictingAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListConflictingAliases \a response.
 */
void ListConflictingAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConflictingAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListConflictingAliasesResponsePrivate
 * \brief The ListConflictingAliasesResponsePrivate class provides private implementation for ListConflictingAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListConflictingAliasesResponsePrivate object with public implementation \a q.
 */
ListConflictingAliasesResponsePrivate::ListConflictingAliasesResponsePrivate(
    ListConflictingAliasesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListConflictingAliases response element from \a xml.
 */
void ListConflictingAliasesResponsePrivate::parseListConflictingAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConflictingAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
