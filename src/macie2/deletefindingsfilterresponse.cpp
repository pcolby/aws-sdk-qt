// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefindingsfilterresponse.h"
#include "deletefindingsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteFindingsFilterResponse
 * \brief The DeleteFindingsFilterResponse class provides an interace for Macie2 DeleteFindingsFilter responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteFindingsFilter
 */

/*!
 * Constructs a DeleteFindingsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFindingsFilterResponse::DeleteFindingsFilterResponse(
        const DeleteFindingsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DeleteFindingsFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteFindingsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFindingsFilterRequest * DeleteFindingsFilterResponse::request() const
{
    Q_D(const DeleteFindingsFilterResponse);
    return static_cast<const DeleteFindingsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DeleteFindingsFilter \a response.
 */
void DeleteFindingsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFindingsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DeleteFindingsFilterResponsePrivate
 * \brief The DeleteFindingsFilterResponsePrivate class provides private implementation for DeleteFindingsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteFindingsFilterResponsePrivate object with public implementation \a q.
 */
DeleteFindingsFilterResponsePrivate::DeleteFindingsFilterResponsePrivate(
    DeleteFindingsFilterResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DeleteFindingsFilter response element from \a xml.
 */
void DeleteFindingsFilterResponsePrivate::parseDeleteFindingsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFindingsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
