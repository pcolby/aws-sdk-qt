// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationsetsuppressionoptionsresponse.h"
#include "putconfigurationsetsuppressionoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutConfigurationSetSuppressionOptionsResponse
 * \brief The PutConfigurationSetSuppressionOptionsResponse class provides an interace for SESv2 PutConfigurationSetSuppressionOptions responses.
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
 * \sa SESv2Client::putConfigurationSetSuppressionOptions
 */

/*!
 * Constructs a PutConfigurationSetSuppressionOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutConfigurationSetSuppressionOptionsResponse::PutConfigurationSetSuppressionOptionsResponse(
        const PutConfigurationSetSuppressionOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutConfigurationSetSuppressionOptionsResponsePrivate(this), parent)
{
    setRequest(new PutConfigurationSetSuppressionOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutConfigurationSetSuppressionOptionsRequest * PutConfigurationSetSuppressionOptionsResponse::request() const
{
    Q_D(const PutConfigurationSetSuppressionOptionsResponse);
    return static_cast<const PutConfigurationSetSuppressionOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutConfigurationSetSuppressionOptions \a response.
 */
void PutConfigurationSetSuppressionOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutConfigurationSetSuppressionOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutConfigurationSetSuppressionOptionsResponsePrivate
 * \brief The PutConfigurationSetSuppressionOptionsResponsePrivate class provides private implementation for PutConfigurationSetSuppressionOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutConfigurationSetSuppressionOptionsResponsePrivate object with public implementation \a q.
 */
PutConfigurationSetSuppressionOptionsResponsePrivate::PutConfigurationSetSuppressionOptionsResponsePrivate(
    PutConfigurationSetSuppressionOptionsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutConfigurationSetSuppressionOptions response element from \a xml.
 */
void PutConfigurationSetSuppressionOptionsResponsePrivate::parsePutConfigurationSetSuppressionOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigurationSetSuppressionOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
