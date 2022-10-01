// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfindingspublicationconfigurationresponse.h"
#include "getfindingspublicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetFindingsPublicationConfigurationResponse
 * \brief The GetFindingsPublicationConfigurationResponse class provides an interace for Macie2 GetFindingsPublicationConfiguration responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getFindingsPublicationConfiguration
 */

/*!
 * Constructs a GetFindingsPublicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetFindingsPublicationConfigurationResponse::GetFindingsPublicationConfigurationResponse(
        const GetFindingsPublicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetFindingsPublicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetFindingsPublicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFindingsPublicationConfigurationRequest * GetFindingsPublicationConfigurationResponse::request() const
{
    Q_D(const GetFindingsPublicationConfigurationResponse);
    return static_cast<const GetFindingsPublicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetFindingsPublicationConfiguration \a response.
 */
void GetFindingsPublicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFindingsPublicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetFindingsPublicationConfigurationResponsePrivate
 * \brief The GetFindingsPublicationConfigurationResponsePrivate class provides private implementation for GetFindingsPublicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetFindingsPublicationConfigurationResponsePrivate object with public implementation \a q.
 */
GetFindingsPublicationConfigurationResponsePrivate::GetFindingsPublicationConfigurationResponsePrivate(
    GetFindingsPublicationConfigurationResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetFindingsPublicationConfiguration response element from \a xml.
 */
void GetFindingsPublicationConfigurationResponsePrivate::parseGetFindingsPublicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsPublicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
