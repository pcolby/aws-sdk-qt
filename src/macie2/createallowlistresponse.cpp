// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createallowlistresponse.h"
#include "createallowlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateAllowListResponse
 * \brief The CreateAllowListResponse class provides an interace for Macie2 CreateAllowList responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createAllowList
 */

/*!
 * Constructs a CreateAllowListResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAllowListResponse::CreateAllowListResponse(
        const CreateAllowListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new CreateAllowListResponsePrivate(this), parent)
{
    setRequest(new CreateAllowListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAllowListRequest * CreateAllowListResponse::request() const
{
    Q_D(const CreateAllowListResponse);
    return static_cast<const CreateAllowListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 CreateAllowList \a response.
 */
void CreateAllowListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAllowListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::CreateAllowListResponsePrivate
 * \brief The CreateAllowListResponsePrivate class provides private implementation for CreateAllowListResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateAllowListResponsePrivate object with public implementation \a q.
 */
CreateAllowListResponsePrivate::CreateAllowListResponsePrivate(
    CreateAllowListResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 CreateAllowList response element from \a xml.
 */
void CreateAllowListResponsePrivate::parseCreateAllowListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAllowListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
