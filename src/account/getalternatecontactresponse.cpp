// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getalternatecontactresponse.h"
#include "getalternatecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::GetAlternateContactResponse
 * \brief The GetAlternateContactResponse class provides an interace for Account GetAlternateContact responses.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::getAlternateContact
 */

/*!
 * Constructs a GetAlternateContactResponse object for \a reply to \a request, with parent \a parent.
 */
GetAlternateContactResponse::GetAlternateContactResponse(
        const GetAlternateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccountResponse(new GetAlternateContactResponsePrivate(this), parent)
{
    setRequest(new GetAlternateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAlternateContactRequest * GetAlternateContactResponse::request() const
{
    Q_D(const GetAlternateContactResponse);
    return static_cast<const GetAlternateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Account GetAlternateContact \a response.
 */
void GetAlternateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAlternateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Account::GetAlternateContactResponsePrivate
 * \brief The GetAlternateContactResponsePrivate class provides private implementation for GetAlternateContactResponse.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a GetAlternateContactResponsePrivate object with public implementation \a q.
 */
GetAlternateContactResponsePrivate::GetAlternateContactResponsePrivate(
    GetAlternateContactResponse * const q) : AccountResponsePrivate(q)
{

}

/*!
 * Parses a Account GetAlternateContact response element from \a xml.
 */
void GetAlternateContactResponsePrivate::parseGetAlternateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAlternateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Account
} // namespace QtAws
