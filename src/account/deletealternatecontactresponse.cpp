// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealternatecontactresponse.h"
#include "deletealternatecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::DeleteAlternateContactResponse
 * \brief The DeleteAlternateContactResponse class provides an interace for Account DeleteAlternateContact responses.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::deleteAlternateContact
 */

/*!
 * Constructs a DeleteAlternateContactResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlternateContactResponse::DeleteAlternateContactResponse(
        const DeleteAlternateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccountResponse(new DeleteAlternateContactResponsePrivate(this), parent)
{
    setRequest(new DeleteAlternateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlternateContactRequest * DeleteAlternateContactResponse::request() const
{
    Q_D(const DeleteAlternateContactResponse);
    return static_cast<const DeleteAlternateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Account DeleteAlternateContact \a response.
 */
void DeleteAlternateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlternateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Account::DeleteAlternateContactResponsePrivate
 * \brief The DeleteAlternateContactResponsePrivate class provides private implementation for DeleteAlternateContactResponse.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a DeleteAlternateContactResponsePrivate object with public implementation \a q.
 */
DeleteAlternateContactResponsePrivate::DeleteAlternateContactResponsePrivate(
    DeleteAlternateContactResponse * const q) : AccountResponsePrivate(q)
{

}

/*!
 * Parses a Account DeleteAlternateContact response element from \a xml.
 */
void DeleteAlternateContactResponsePrivate::parseDeleteAlternateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlternateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Account
} // namespace QtAws
