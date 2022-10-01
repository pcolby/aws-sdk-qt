// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountdetailsresponse.h"
#include "putaccountdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountDetailsResponse
 * \brief The PutAccountDetailsResponse class provides an interace for SESv2 PutAccountDetails responses.
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
 * \sa SESv2Client::putAccountDetails
 */

/*!
 * Constructs a PutAccountDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountDetailsResponse::PutAccountDetailsResponse(
        const PutAccountDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutAccountDetailsResponsePrivate(this), parent)
{
    setRequest(new PutAccountDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountDetailsRequest * PutAccountDetailsResponse::request() const
{
    Q_D(const PutAccountDetailsResponse);
    return static_cast<const PutAccountDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutAccountDetails \a response.
 */
void PutAccountDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutAccountDetailsResponsePrivate
 * \brief The PutAccountDetailsResponsePrivate class provides private implementation for PutAccountDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountDetailsResponsePrivate object with public implementation \a q.
 */
PutAccountDetailsResponsePrivate::PutAccountDetailsResponsePrivate(
    PutAccountDetailsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutAccountDetails response element from \a xml.
 */
void PutAccountDetailsResponsePrivate::parsePutAccountDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
