// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putemailidentitydkimsigningattributesresponse.h"
#include "putemailidentitydkimsigningattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutEmailIdentityDkimSigningAttributesResponse
 * \brief The PutEmailIdentityDkimSigningAttributesResponse class provides an interace for SESv2 PutEmailIdentityDkimSigningAttributes responses.
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
 * \sa SESv2Client::putEmailIdentityDkimSigningAttributes
 */

/*!
 * Constructs a PutEmailIdentityDkimSigningAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutEmailIdentityDkimSigningAttributesResponse::PutEmailIdentityDkimSigningAttributesResponse(
        const PutEmailIdentityDkimSigningAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutEmailIdentityDkimSigningAttributesResponsePrivate(this), parent)
{
    setRequest(new PutEmailIdentityDkimSigningAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEmailIdentityDkimSigningAttributesRequest * PutEmailIdentityDkimSigningAttributesResponse::request() const
{
    Q_D(const PutEmailIdentityDkimSigningAttributesResponse);
    return static_cast<const PutEmailIdentityDkimSigningAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutEmailIdentityDkimSigningAttributes \a response.
 */
void PutEmailIdentityDkimSigningAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEmailIdentityDkimSigningAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutEmailIdentityDkimSigningAttributesResponsePrivate
 * \brief The PutEmailIdentityDkimSigningAttributesResponsePrivate class provides private implementation for PutEmailIdentityDkimSigningAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutEmailIdentityDkimSigningAttributesResponsePrivate object with public implementation \a q.
 */
PutEmailIdentityDkimSigningAttributesResponsePrivate::PutEmailIdentityDkimSigningAttributesResponsePrivate(
    PutEmailIdentityDkimSigningAttributesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutEmailIdentityDkimSigningAttributes response element from \a xml.
 */
void PutEmailIdentityDkimSigningAttributesResponsePrivate::parsePutEmailIdentityDkimSigningAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEmailIdentityDkimSigningAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
