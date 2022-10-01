// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustomverificationemailtemplatesresponse.h"
#include "listcustomverificationemailtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListCustomVerificationEmailTemplatesResponse
 * \brief The ListCustomVerificationEmailTemplatesResponse class provides an interace for SESv2 ListCustomVerificationEmailTemplates responses.
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
 * \sa SESv2Client::listCustomVerificationEmailTemplates
 */

/*!
 * Constructs a ListCustomVerificationEmailTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomVerificationEmailTemplatesResponse::ListCustomVerificationEmailTemplatesResponse(
        const ListCustomVerificationEmailTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListCustomVerificationEmailTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListCustomVerificationEmailTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomVerificationEmailTemplatesRequest * ListCustomVerificationEmailTemplatesResponse::request() const
{
    Q_D(const ListCustomVerificationEmailTemplatesResponse);
    return static_cast<const ListCustomVerificationEmailTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListCustomVerificationEmailTemplates \a response.
 */
void ListCustomVerificationEmailTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomVerificationEmailTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListCustomVerificationEmailTemplatesResponsePrivate
 * \brief The ListCustomVerificationEmailTemplatesResponsePrivate class provides private implementation for ListCustomVerificationEmailTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListCustomVerificationEmailTemplatesResponsePrivate object with public implementation \a q.
 */
ListCustomVerificationEmailTemplatesResponsePrivate::ListCustomVerificationEmailTemplatesResponsePrivate(
    ListCustomVerificationEmailTemplatesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListCustomVerificationEmailTemplates response element from \a xml.
 */
void ListCustomVerificationEmailTemplatesResponsePrivate::parseListCustomVerificationEmailTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomVerificationEmailTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
