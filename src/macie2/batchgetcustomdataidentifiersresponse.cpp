// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetcustomdataidentifiersresponse.h"
#include "batchgetcustomdataidentifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::BatchGetCustomDataIdentifiersResponse
 * \brief The BatchGetCustomDataIdentifiersResponse class provides an interace for Macie2 BatchGetCustomDataIdentifiers responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::batchGetCustomDataIdentifiers
 */

/*!
 * Constructs a BatchGetCustomDataIdentifiersResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetCustomDataIdentifiersResponse::BatchGetCustomDataIdentifiersResponse(
        const BatchGetCustomDataIdentifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new BatchGetCustomDataIdentifiersResponsePrivate(this), parent)
{
    setRequest(new BatchGetCustomDataIdentifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetCustomDataIdentifiersRequest * BatchGetCustomDataIdentifiersResponse::request() const
{
    Q_D(const BatchGetCustomDataIdentifiersResponse);
    return static_cast<const BatchGetCustomDataIdentifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 BatchGetCustomDataIdentifiers \a response.
 */
void BatchGetCustomDataIdentifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetCustomDataIdentifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::BatchGetCustomDataIdentifiersResponsePrivate
 * \brief The BatchGetCustomDataIdentifiersResponsePrivate class provides private implementation for BatchGetCustomDataIdentifiersResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a BatchGetCustomDataIdentifiersResponsePrivate object with public implementation \a q.
 */
BatchGetCustomDataIdentifiersResponsePrivate::BatchGetCustomDataIdentifiersResponsePrivate(
    BatchGetCustomDataIdentifiersResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 BatchGetCustomDataIdentifiers response element from \a xml.
 */
void BatchGetCustomDataIdentifiersResponsePrivate::parseBatchGetCustomDataIdentifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetCustomDataIdentifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
