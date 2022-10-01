// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdedicatedipinpoolresponse.h"
#include "putdedicatedipinpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutDedicatedIpInPoolResponse
 * \brief The PutDedicatedIpInPoolResponse class provides an interace for SESv2 PutDedicatedIpInPool responses.
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
 * \sa SESv2Client::putDedicatedIpInPool
 */

/*!
 * Constructs a PutDedicatedIpInPoolResponse object for \a reply to \a request, with parent \a parent.
 */
PutDedicatedIpInPoolResponse::PutDedicatedIpInPoolResponse(
        const PutDedicatedIpInPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutDedicatedIpInPoolResponsePrivate(this), parent)
{
    setRequest(new PutDedicatedIpInPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutDedicatedIpInPoolRequest * PutDedicatedIpInPoolResponse::request() const
{
    Q_D(const PutDedicatedIpInPoolResponse);
    return static_cast<const PutDedicatedIpInPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutDedicatedIpInPool \a response.
 */
void PutDedicatedIpInPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutDedicatedIpInPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutDedicatedIpInPoolResponsePrivate
 * \brief The PutDedicatedIpInPoolResponsePrivate class provides private implementation for PutDedicatedIpInPoolResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutDedicatedIpInPoolResponsePrivate object with public implementation \a q.
 */
PutDedicatedIpInPoolResponsePrivate::PutDedicatedIpInPoolResponsePrivate(
    PutDedicatedIpInPoolResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutDedicatedIpInPool response element from \a xml.
 */
void PutDedicatedIpInPoolResponsePrivate::parsePutDedicatedIpInPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDedicatedIpInPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
