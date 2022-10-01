// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountdedicatedipwarmupattributesresponse.h"
#include "putaccountdedicatedipwarmupattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountDedicatedIpWarmupAttributesResponse
 * \brief The PutAccountDedicatedIpWarmupAttributesResponse class provides an interace for SESv2 PutAccountDedicatedIpWarmupAttributes responses.
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
 * \sa SESv2Client::putAccountDedicatedIpWarmupAttributes
 */

/*!
 * Constructs a PutAccountDedicatedIpWarmupAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountDedicatedIpWarmupAttributesResponse::PutAccountDedicatedIpWarmupAttributesResponse(
        const PutAccountDedicatedIpWarmupAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutAccountDedicatedIpWarmupAttributesResponsePrivate(this), parent)
{
    setRequest(new PutAccountDedicatedIpWarmupAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountDedicatedIpWarmupAttributesRequest * PutAccountDedicatedIpWarmupAttributesResponse::request() const
{
    Q_D(const PutAccountDedicatedIpWarmupAttributesResponse);
    return static_cast<const PutAccountDedicatedIpWarmupAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutAccountDedicatedIpWarmupAttributes \a response.
 */
void PutAccountDedicatedIpWarmupAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountDedicatedIpWarmupAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutAccountDedicatedIpWarmupAttributesResponsePrivate
 * \brief The PutAccountDedicatedIpWarmupAttributesResponsePrivate class provides private implementation for PutAccountDedicatedIpWarmupAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountDedicatedIpWarmupAttributesResponsePrivate object with public implementation \a q.
 */
PutAccountDedicatedIpWarmupAttributesResponsePrivate::PutAccountDedicatedIpWarmupAttributesResponsePrivate(
    PutAccountDedicatedIpWarmupAttributesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutAccountDedicatedIpWarmupAttributes response element from \a xml.
 */
void PutAccountDedicatedIpWarmupAttributesResponsePrivate::parsePutAccountDedicatedIpWarmupAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountDedicatedIpWarmupAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
