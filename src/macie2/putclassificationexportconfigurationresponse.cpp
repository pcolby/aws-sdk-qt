// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putclassificationexportconfigurationresponse.h"
#include "putclassificationexportconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::PutClassificationExportConfigurationResponse
 * \brief The PutClassificationExportConfigurationResponse class provides an interace for Macie2 PutClassificationExportConfiguration responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::putClassificationExportConfiguration
 */

/*!
 * Constructs a PutClassificationExportConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutClassificationExportConfigurationResponse::PutClassificationExportConfigurationResponse(
        const PutClassificationExportConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new PutClassificationExportConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutClassificationExportConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutClassificationExportConfigurationRequest * PutClassificationExportConfigurationResponse::request() const
{
    Q_D(const PutClassificationExportConfigurationResponse);
    return static_cast<const PutClassificationExportConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 PutClassificationExportConfiguration \a response.
 */
void PutClassificationExportConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutClassificationExportConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::PutClassificationExportConfigurationResponsePrivate
 * \brief The PutClassificationExportConfigurationResponsePrivate class provides private implementation for PutClassificationExportConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a PutClassificationExportConfigurationResponsePrivate object with public implementation \a q.
 */
PutClassificationExportConfigurationResponsePrivate::PutClassificationExportConfigurationResponsePrivate(
    PutClassificationExportConfigurationResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 PutClassificationExportConfiguration response element from \a xml.
 */
void PutClassificationExportConfigurationResponsePrivate::parsePutClassificationExportConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutClassificationExportConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
