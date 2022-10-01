// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailidentityresponse.h"
#include "getemailidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetEmailIdentityResponse
 * \brief The GetEmailIdentityResponse class provides an interace for SESv2 GetEmailIdentity responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getEmailIdentity
 */

/*!
 * Constructs a GetEmailIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
GetEmailIdentityResponse::GetEmailIdentityResponse(
        const GetEmailIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetEmailIdentityResponsePrivate(this), parent)
{
    setRequest(new GetEmailIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEmailIdentityRequest * GetEmailIdentityResponse::request() const
{
    Q_D(const GetEmailIdentityResponse);
    return static_cast<const GetEmailIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetEmailIdentity \a response.
 */
void GetEmailIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEmailIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetEmailIdentityResponsePrivate
 * \brief The GetEmailIdentityResponsePrivate class provides private implementation for GetEmailIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetEmailIdentityResponsePrivate object with public implementation \a q.
 */
GetEmailIdentityResponsePrivate::GetEmailIdentityResponsePrivate(
    GetEmailIdentityResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetEmailIdentity response element from \a xml.
 */
void GetEmailIdentityResponsePrivate::parseGetEmailIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
