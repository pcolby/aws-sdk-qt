// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetransactionresponse.h"
#include "describetransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DescribeTransactionResponse
 * \brief The DescribeTransactionResponse class provides an interace for LakeFormation DescribeTransaction responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::describeTransaction
 */

/*!
 * Constructs a DescribeTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTransactionResponse::DescribeTransactionResponse(
        const DescribeTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DescribeTransactionResponsePrivate(this), parent)
{
    setRequest(new DescribeTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTransactionRequest * DescribeTransactionResponse::request() const
{
    Q_D(const DescribeTransactionResponse);
    return static_cast<const DescribeTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DescribeTransaction \a response.
 */
void DescribeTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DescribeTransactionResponsePrivate
 * \brief The DescribeTransactionResponsePrivate class provides private implementation for DescribeTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DescribeTransactionResponsePrivate object with public implementation \a q.
 */
DescribeTransactionResponsePrivate::DescribeTransactionResponsePrivate(
    DescribeTransactionResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DescribeTransaction response element from \a xml.
 */
void DescribeTransactionResponsePrivate::parseDescribeTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
