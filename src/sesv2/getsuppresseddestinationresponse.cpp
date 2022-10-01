// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuppresseddestinationresponse.h"
#include "getsuppresseddestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetSuppressedDestinationResponse
 * \brief The GetSuppressedDestinationResponse class provides an interace for SESv2 GetSuppressedDestination responses.
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
 * \sa SESv2Client::getSuppressedDestination
 */

/*!
 * Constructs a GetSuppressedDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
GetSuppressedDestinationResponse::GetSuppressedDestinationResponse(
        const GetSuppressedDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetSuppressedDestinationResponsePrivate(this), parent)
{
    setRequest(new GetSuppressedDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSuppressedDestinationRequest * GetSuppressedDestinationResponse::request() const
{
    Q_D(const GetSuppressedDestinationResponse);
    return static_cast<const GetSuppressedDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetSuppressedDestination \a response.
 */
void GetSuppressedDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSuppressedDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetSuppressedDestinationResponsePrivate
 * \brief The GetSuppressedDestinationResponsePrivate class provides private implementation for GetSuppressedDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetSuppressedDestinationResponsePrivate object with public implementation \a q.
 */
GetSuppressedDestinationResponsePrivate::GetSuppressedDestinationResponsePrivate(
    GetSuppressedDestinationResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetSuppressedDestination response element from \a xml.
 */
void GetSuppressedDestinationResponsePrivate::parseGetSuppressedDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSuppressedDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
