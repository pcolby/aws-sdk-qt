// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfindingsfilterresponse.h"
#include "createfindingsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateFindingsFilterResponse
 * \brief The CreateFindingsFilterResponse class provides an interace for Macie2 CreateFindingsFilter responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createFindingsFilter
 */

/*!
 * Constructs a CreateFindingsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFindingsFilterResponse::CreateFindingsFilterResponse(
        const CreateFindingsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new CreateFindingsFilterResponsePrivate(this), parent)
{
    setRequest(new CreateFindingsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFindingsFilterRequest * CreateFindingsFilterResponse::request() const
{
    Q_D(const CreateFindingsFilterResponse);
    return static_cast<const CreateFindingsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 CreateFindingsFilter \a response.
 */
void CreateFindingsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFindingsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::CreateFindingsFilterResponsePrivate
 * \brief The CreateFindingsFilterResponsePrivate class provides private implementation for CreateFindingsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateFindingsFilterResponsePrivate object with public implementation \a q.
 */
CreateFindingsFilterResponsePrivate::CreateFindingsFilterResponsePrivate(
    CreateFindingsFilterResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 CreateFindingsFilter response element from \a xml.
 */
void CreateFindingsFilterResponsePrivate::parseCreateFindingsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFindingsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
