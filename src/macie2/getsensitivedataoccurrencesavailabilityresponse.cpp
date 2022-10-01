// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsensitivedataoccurrencesavailabilityresponse.h"
#include "getsensitivedataoccurrencesavailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetSensitiveDataOccurrencesAvailabilityResponse
 * \brief The GetSensitiveDataOccurrencesAvailabilityResponse class provides an interace for Macie2 GetSensitiveDataOccurrencesAvailability responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getSensitiveDataOccurrencesAvailability
 */

/*!
 * Constructs a GetSensitiveDataOccurrencesAvailabilityResponse object for \a reply to \a request, with parent \a parent.
 */
GetSensitiveDataOccurrencesAvailabilityResponse::GetSensitiveDataOccurrencesAvailabilityResponse(
        const GetSensitiveDataOccurrencesAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetSensitiveDataOccurrencesAvailabilityResponsePrivate(this), parent)
{
    setRequest(new GetSensitiveDataOccurrencesAvailabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSensitiveDataOccurrencesAvailabilityRequest * GetSensitiveDataOccurrencesAvailabilityResponse::request() const
{
    Q_D(const GetSensitiveDataOccurrencesAvailabilityResponse);
    return static_cast<const GetSensitiveDataOccurrencesAvailabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetSensitiveDataOccurrencesAvailability \a response.
 */
void GetSensitiveDataOccurrencesAvailabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSensitiveDataOccurrencesAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetSensitiveDataOccurrencesAvailabilityResponsePrivate
 * \brief The GetSensitiveDataOccurrencesAvailabilityResponsePrivate class provides private implementation for GetSensitiveDataOccurrencesAvailabilityResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetSensitiveDataOccurrencesAvailabilityResponsePrivate object with public implementation \a q.
 */
GetSensitiveDataOccurrencesAvailabilityResponsePrivate::GetSensitiveDataOccurrencesAvailabilityResponsePrivate(
    GetSensitiveDataOccurrencesAvailabilityResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetSensitiveDataOccurrencesAvailability response element from \a xml.
 */
void GetSensitiveDataOccurrencesAvailabilityResponsePrivate::parseGetSensitiveDataOccurrencesAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSensitiveDataOccurrencesAvailabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
