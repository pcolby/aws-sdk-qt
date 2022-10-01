// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putalternatecontactresponse.h"
#include "putalternatecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::PutAlternateContactResponse
 * \brief The PutAlternateContactResponse class provides an interace for Account PutAlternateContact responses.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::putAlternateContact
 */

/*!
 * Constructs a PutAlternateContactResponse object for \a reply to \a request, with parent \a parent.
 */
PutAlternateContactResponse::PutAlternateContactResponse(
        const PutAlternateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccountResponse(new PutAlternateContactResponsePrivate(this), parent)
{
    setRequest(new PutAlternateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAlternateContactRequest * PutAlternateContactResponse::request() const
{
    Q_D(const PutAlternateContactResponse);
    return static_cast<const PutAlternateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Account PutAlternateContact \a response.
 */
void PutAlternateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAlternateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Account::PutAlternateContactResponsePrivate
 * \brief The PutAlternateContactResponsePrivate class provides private implementation for PutAlternateContactResponse.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a PutAlternateContactResponsePrivate object with public implementation \a q.
 */
PutAlternateContactResponsePrivate::PutAlternateContactResponsePrivate(
    PutAlternateContactResponse * const q) : AccountResponsePrivate(q)
{

}

/*!
 * Parses a Account PutAlternateContact response element from \a xml.
 */
void PutAlternateContactResponsePrivate::parsePutAlternateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAlternateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Account
} // namespace QtAws
