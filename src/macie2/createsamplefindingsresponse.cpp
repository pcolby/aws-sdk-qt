// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsamplefindingsresponse.h"
#include "createsamplefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateSampleFindingsResponse
 * \brief The CreateSampleFindingsResponse class provides an interace for Macie2 CreateSampleFindings responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createSampleFindings
 */

/*!
 * Constructs a CreateSampleFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSampleFindingsResponse::CreateSampleFindingsResponse(
        const CreateSampleFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new CreateSampleFindingsResponsePrivate(this), parent)
{
    setRequest(new CreateSampleFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSampleFindingsRequest * CreateSampleFindingsResponse::request() const
{
    Q_D(const CreateSampleFindingsResponse);
    return static_cast<const CreateSampleFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 CreateSampleFindings \a response.
 */
void CreateSampleFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSampleFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::CreateSampleFindingsResponsePrivate
 * \brief The CreateSampleFindingsResponsePrivate class provides private implementation for CreateSampleFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateSampleFindingsResponsePrivate object with public implementation \a q.
 */
CreateSampleFindingsResponsePrivate::CreateSampleFindingsResponsePrivate(
    CreateSampleFindingsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 CreateSampleFindings response element from \a xml.
 */
void CreateSampleFindingsResponsePrivate::parseCreateSampleFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSampleFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
