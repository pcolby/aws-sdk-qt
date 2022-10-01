// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putemailidentitymailfromattributesresponse.h"
#include "putemailidentitymailfromattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutEmailIdentityMailFromAttributesResponse
 * \brief The PutEmailIdentityMailFromAttributesResponse class provides an interace for SESv2 PutEmailIdentityMailFromAttributes responses.
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
 * \sa SESv2Client::putEmailIdentityMailFromAttributes
 */

/*!
 * Constructs a PutEmailIdentityMailFromAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutEmailIdentityMailFromAttributesResponse::PutEmailIdentityMailFromAttributesResponse(
        const PutEmailIdentityMailFromAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutEmailIdentityMailFromAttributesResponsePrivate(this), parent)
{
    setRequest(new PutEmailIdentityMailFromAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEmailIdentityMailFromAttributesRequest * PutEmailIdentityMailFromAttributesResponse::request() const
{
    Q_D(const PutEmailIdentityMailFromAttributesResponse);
    return static_cast<const PutEmailIdentityMailFromAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutEmailIdentityMailFromAttributes \a response.
 */
void PutEmailIdentityMailFromAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEmailIdentityMailFromAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutEmailIdentityMailFromAttributesResponsePrivate
 * \brief The PutEmailIdentityMailFromAttributesResponsePrivate class provides private implementation for PutEmailIdentityMailFromAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutEmailIdentityMailFromAttributesResponsePrivate object with public implementation \a q.
 */
PutEmailIdentityMailFromAttributesResponsePrivate::PutEmailIdentityMailFromAttributesResponsePrivate(
    PutEmailIdentityMailFromAttributesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutEmailIdentityMailFromAttributes response element from \a xml.
 */
void PutEmailIdentityMailFromAttributesResponsePrivate::parsePutEmailIdentityMailFromAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEmailIdentityMailFromAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
