// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putemailidentitydkimattributesresponse.h"
#include "putemailidentitydkimattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutEmailIdentityDkimAttributesResponse
 * \brief The PutEmailIdentityDkimAttributesResponse class provides an interace for SESv2 PutEmailIdentityDkimAttributes responses.
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
 * \sa SESv2Client::putEmailIdentityDkimAttributes
 */

/*!
 * Constructs a PutEmailIdentityDkimAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutEmailIdentityDkimAttributesResponse::PutEmailIdentityDkimAttributesResponse(
        const PutEmailIdentityDkimAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutEmailIdentityDkimAttributesResponsePrivate(this), parent)
{
    setRequest(new PutEmailIdentityDkimAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEmailIdentityDkimAttributesRequest * PutEmailIdentityDkimAttributesResponse::request() const
{
    Q_D(const PutEmailIdentityDkimAttributesResponse);
    return static_cast<const PutEmailIdentityDkimAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutEmailIdentityDkimAttributes \a response.
 */
void PutEmailIdentityDkimAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEmailIdentityDkimAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutEmailIdentityDkimAttributesResponsePrivate
 * \brief The PutEmailIdentityDkimAttributesResponsePrivate class provides private implementation for PutEmailIdentityDkimAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutEmailIdentityDkimAttributesResponsePrivate object with public implementation \a q.
 */
PutEmailIdentityDkimAttributesResponsePrivate::PutEmailIdentityDkimAttributesResponsePrivate(
    PutEmailIdentityDkimAttributesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutEmailIdentityDkimAttributes response element from \a xml.
 */
void PutEmailIdentityDkimAttributesResponsePrivate::parsePutEmailIdentityDkimAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEmailIdentityDkimAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
