// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcontactinformationresponse.h"
#include "putcontactinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::PutContactInformationResponse
 * \brief The PutContactInformationResponse class provides an interace for Account PutContactInformation responses.
 *
 * \inmodule QtAwsAccount
 *
 *  Operations for Amazon Web Services Account
 *
 * \sa AccountClient::putContactInformation
 */

/*!
 * Constructs a PutContactInformationResponse object for \a reply to \a request, with parent \a parent.
 */
PutContactInformationResponse::PutContactInformationResponse(
        const PutContactInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccountResponse(new PutContactInformationResponsePrivate(this), parent)
{
    setRequest(new PutContactInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutContactInformationRequest * PutContactInformationResponse::request() const
{
    Q_D(const PutContactInformationResponse);
    return static_cast<const PutContactInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Account PutContactInformation \a response.
 */
void PutContactInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutContactInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Account::PutContactInformationResponsePrivate
 * \brief The PutContactInformationResponsePrivate class provides private implementation for PutContactInformationResponse.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a PutContactInformationResponsePrivate object with public implementation \a q.
 */
PutContactInformationResponsePrivate::PutContactInformationResponsePrivate(
    PutContactInformationResponse * const q) : AccountResponsePrivate(q)
{

}

/*!
 * Parses a Account PutContactInformation response element from \a xml.
 */
void PutContactInformationResponsePrivate::parsePutContactInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContactInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Account
} // namespace QtAws
