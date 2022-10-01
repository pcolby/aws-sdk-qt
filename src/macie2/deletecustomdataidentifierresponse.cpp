// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomdataidentifierresponse.h"
#include "deletecustomdataidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteCustomDataIdentifierResponse
 * \brief The DeleteCustomDataIdentifierResponse class provides an interace for Macie2 DeleteCustomDataIdentifier responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteCustomDataIdentifier
 */

/*!
 * Constructs a DeleteCustomDataIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomDataIdentifierResponse::DeleteCustomDataIdentifierResponse(
        const DeleteCustomDataIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DeleteCustomDataIdentifierResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomDataIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomDataIdentifierRequest * DeleteCustomDataIdentifierResponse::request() const
{
    Q_D(const DeleteCustomDataIdentifierResponse);
    return static_cast<const DeleteCustomDataIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DeleteCustomDataIdentifier \a response.
 */
void DeleteCustomDataIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomDataIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DeleteCustomDataIdentifierResponsePrivate
 * \brief The DeleteCustomDataIdentifierResponsePrivate class provides private implementation for DeleteCustomDataIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteCustomDataIdentifierResponsePrivate object with public implementation \a q.
 */
DeleteCustomDataIdentifierResponsePrivate::DeleteCustomDataIdentifierResponsePrivate(
    DeleteCustomDataIdentifierResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DeleteCustomDataIdentifier response element from \a xml.
 */
void DeleteCustomDataIdentifierResponsePrivate::parseDeleteCustomDataIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomDataIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
