// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactinformationresponse.h"
#include "getcontactinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::GetContactInformationResponse
 * \brief The GetContactInformationResponse class provides an interace for Account GetContactInformation responses.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::getContactInformation
 */

/*!
 * Constructs a GetContactInformationResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactInformationResponse::GetContactInformationResponse(
        const GetContactInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccountResponse(new GetContactInformationResponsePrivate(this), parent)
{
    setRequest(new GetContactInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactInformationRequest * GetContactInformationResponse::request() const
{
    Q_D(const GetContactInformationResponse);
    return static_cast<const GetContactInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Account GetContactInformation \a response.
 */
void GetContactInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Account::GetContactInformationResponsePrivate
 * \brief The GetContactInformationResponsePrivate class provides private implementation for GetContactInformationResponse.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a GetContactInformationResponsePrivate object with public implementation \a q.
 */
GetContactInformationResponsePrivate::GetContactInformationResponsePrivate(
    GetContactInformationResponse * const q) : AccountResponsePrivate(q)
{

}

/*!
 * Parses a Account GetContactInformation response element from \a xml.
 */
void GetContactInformationResponsePrivate::parseGetContactInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Account
} // namespace QtAws
