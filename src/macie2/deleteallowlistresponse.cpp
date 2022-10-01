// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteallowlistresponse.h"
#include "deleteallowlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteAllowListResponse
 * \brief The DeleteAllowListResponse class provides an interace for Macie2 DeleteAllowList responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteAllowList
 */

/*!
 * Constructs a DeleteAllowListResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAllowListResponse::DeleteAllowListResponse(
        const DeleteAllowListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DeleteAllowListResponsePrivate(this), parent)
{
    setRequest(new DeleteAllowListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAllowListRequest * DeleteAllowListResponse::request() const
{
    Q_D(const DeleteAllowListResponse);
    return static_cast<const DeleteAllowListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DeleteAllowList \a response.
 */
void DeleteAllowListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAllowListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DeleteAllowListResponsePrivate
 * \brief The DeleteAllowListResponsePrivate class provides private implementation for DeleteAllowListResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteAllowListResponsePrivate object with public implementation \a q.
 */
DeleteAllowListResponsePrivate::DeleteAllowListResponsePrivate(
    DeleteAllowListResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DeleteAllowList response element from \a xml.
 */
void DeleteAllowListResponsePrivate::parseDeleteAllowListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAllowListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
