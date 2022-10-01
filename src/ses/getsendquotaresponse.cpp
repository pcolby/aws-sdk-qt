// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsendquotaresponse.h"
#include "getsendquotaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetSendQuotaResponse
 * \brief The GetSendQuotaResponse class provides an interace for Ses GetSendQuota responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getSendQuota
 */

/*!
 * Constructs a GetSendQuotaResponse object for \a reply to \a request, with parent \a parent.
 */
GetSendQuotaResponse::GetSendQuotaResponse(
        const GetSendQuotaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetSendQuotaResponsePrivate(this), parent)
{
    setRequest(new GetSendQuotaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSendQuotaRequest * GetSendQuotaResponse::request() const
{
    Q_D(const GetSendQuotaResponse);
    return static_cast<const GetSendQuotaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetSendQuota \a response.
 */
void GetSendQuotaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSendQuotaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetSendQuotaResponsePrivate
 * \brief The GetSendQuotaResponsePrivate class provides private implementation for GetSendQuotaResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetSendQuotaResponsePrivate object with public implementation \a q.
 */
GetSendQuotaResponsePrivate::GetSendQuotaResponsePrivate(
    GetSendQuotaResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetSendQuota response element from \a xml.
 */
void GetSendQuotaResponsePrivate::parseGetSendQuotaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSendQuotaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
