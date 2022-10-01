// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateallowlistresponse.h"
#include "updateallowlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateAllowListResponse
 * \brief The UpdateAllowListResponse class provides an interace for Macie2 UpdateAllowList responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateAllowList
 */

/*!
 * Constructs a UpdateAllowListResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAllowListResponse::UpdateAllowListResponse(
        const UpdateAllowListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new UpdateAllowListResponsePrivate(this), parent)
{
    setRequest(new UpdateAllowListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAllowListRequest * UpdateAllowListResponse::request() const
{
    Q_D(const UpdateAllowListResponse);
    return static_cast<const UpdateAllowListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 UpdateAllowList \a response.
 */
void UpdateAllowListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAllowListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::UpdateAllowListResponsePrivate
 * \brief The UpdateAllowListResponsePrivate class provides private implementation for UpdateAllowListResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateAllowListResponsePrivate object with public implementation \a q.
 */
UpdateAllowListResponsePrivate::UpdateAllowListResponsePrivate(
    UpdateAllowListResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 UpdateAllowList response element from \a xml.
 */
void UpdateAllowListResponsePrivate::parseUpdateAllowListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAllowListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
