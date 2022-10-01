// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclassificationexportconfigurationresponse.h"
#include "getclassificationexportconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetClassificationExportConfigurationResponse
 * \brief The GetClassificationExportConfigurationResponse class provides an interace for Macie2 GetClassificationExportConfiguration responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getClassificationExportConfiguration
 */

/*!
 * Constructs a GetClassificationExportConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetClassificationExportConfigurationResponse::GetClassificationExportConfigurationResponse(
        const GetClassificationExportConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetClassificationExportConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetClassificationExportConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClassificationExportConfigurationRequest * GetClassificationExportConfigurationResponse::request() const
{
    Q_D(const GetClassificationExportConfigurationResponse);
    return static_cast<const GetClassificationExportConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetClassificationExportConfiguration \a response.
 */
void GetClassificationExportConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClassificationExportConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetClassificationExportConfigurationResponsePrivate
 * \brief The GetClassificationExportConfigurationResponsePrivate class provides private implementation for GetClassificationExportConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetClassificationExportConfigurationResponsePrivate object with public implementation \a q.
 */
GetClassificationExportConfigurationResponsePrivate::GetClassificationExportConfigurationResponsePrivate(
    GetClassificationExportConfigurationResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetClassificationExportConfiguration response element from \a xml.
 */
void GetClassificationExportConfigurationResponsePrivate::parseGetClassificationExportConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClassificationExportConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
