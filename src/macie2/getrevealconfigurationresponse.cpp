// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrevealconfigurationresponse.h"
#include "getrevealconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetRevealConfigurationResponse
 * \brief The GetRevealConfigurationResponse class provides an interace for Macie2 GetRevealConfiguration responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getRevealConfiguration
 */

/*!
 * Constructs a GetRevealConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetRevealConfigurationResponse::GetRevealConfigurationResponse(
        const GetRevealConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetRevealConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetRevealConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRevealConfigurationRequest * GetRevealConfigurationResponse::request() const
{
    Q_D(const GetRevealConfigurationResponse);
    return static_cast<const GetRevealConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetRevealConfiguration \a response.
 */
void GetRevealConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRevealConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetRevealConfigurationResponsePrivate
 * \brief The GetRevealConfigurationResponsePrivate class provides private implementation for GetRevealConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetRevealConfigurationResponsePrivate object with public implementation \a q.
 */
GetRevealConfigurationResponsePrivate::GetRevealConfigurationResponsePrivate(
    GetRevealConfigurationResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetRevealConfiguration response element from \a xml.
 */
void GetRevealConfigurationResponsePrivate::parseGetRevealConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRevealConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
