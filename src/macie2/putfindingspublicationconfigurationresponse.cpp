// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putfindingspublicationconfigurationresponse.h"
#include "putfindingspublicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::PutFindingsPublicationConfigurationResponse
 * \brief The PutFindingsPublicationConfigurationResponse class provides an interace for Macie2 PutFindingsPublicationConfiguration responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::putFindingsPublicationConfiguration
 */

/*!
 * Constructs a PutFindingsPublicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutFindingsPublicationConfigurationResponse::PutFindingsPublicationConfigurationResponse(
        const PutFindingsPublicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new PutFindingsPublicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutFindingsPublicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFindingsPublicationConfigurationRequest * PutFindingsPublicationConfigurationResponse::request() const
{
    Q_D(const PutFindingsPublicationConfigurationResponse);
    return static_cast<const PutFindingsPublicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 PutFindingsPublicationConfiguration \a response.
 */
void PutFindingsPublicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFindingsPublicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::PutFindingsPublicationConfigurationResponsePrivate
 * \brief The PutFindingsPublicationConfigurationResponsePrivate class provides private implementation for PutFindingsPublicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a PutFindingsPublicationConfigurationResponsePrivate object with public implementation \a q.
 */
PutFindingsPublicationConfigurationResponsePrivate::PutFindingsPublicationConfigurationResponsePrivate(
    PutFindingsPublicationConfigurationResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 PutFindingsPublicationConfiguration response element from \a xml.
 */
void PutFindingsPublicationConfigurationResponsePrivate::parsePutFindingsPublicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFindingsPublicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
