// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcustomdataidentifierresponse.h"
#include "createcustomdataidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateCustomDataIdentifierResponse
 * \brief The CreateCustomDataIdentifierResponse class provides an interace for Macie2 CreateCustomDataIdentifier responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createCustomDataIdentifier
 */

/*!
 * Constructs a CreateCustomDataIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCustomDataIdentifierResponse::CreateCustomDataIdentifierResponse(
        const CreateCustomDataIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new CreateCustomDataIdentifierResponsePrivate(this), parent)
{
    setRequest(new CreateCustomDataIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCustomDataIdentifierRequest * CreateCustomDataIdentifierResponse::request() const
{
    Q_D(const CreateCustomDataIdentifierResponse);
    return static_cast<const CreateCustomDataIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 CreateCustomDataIdentifier \a response.
 */
void CreateCustomDataIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCustomDataIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::CreateCustomDataIdentifierResponsePrivate
 * \brief The CreateCustomDataIdentifierResponsePrivate class provides private implementation for CreateCustomDataIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateCustomDataIdentifierResponsePrivate object with public implementation \a q.
 */
CreateCustomDataIdentifierResponsePrivate::CreateCustomDataIdentifierResponsePrivate(
    CreateCustomDataIdentifierResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 CreateCustomDataIdentifier response element from \a xml.
 */
void CreateCustomDataIdentifierResponsePrivate::parseCreateCustomDataIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomDataIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
