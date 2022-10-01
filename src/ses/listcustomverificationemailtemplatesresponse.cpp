// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustomverificationemailtemplatesresponse.h"
#include "listcustomverificationemailtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListCustomVerificationEmailTemplatesResponse
 * \brief The ListCustomVerificationEmailTemplatesResponse class provides an interace for Ses ListCustomVerificationEmailTemplates responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::listCustomVerificationEmailTemplates
 */

/*!
 * Constructs a ListCustomVerificationEmailTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomVerificationEmailTemplatesResponse::ListCustomVerificationEmailTemplatesResponse(
        const ListCustomVerificationEmailTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListCustomVerificationEmailTemplatesResponsePrivate(this), parent)
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
 * Parses a successful Ses ListCustomVerificationEmailTemplates \a response.
 */
void ListCustomVerificationEmailTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomVerificationEmailTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListCustomVerificationEmailTemplatesResponsePrivate
 * \brief The ListCustomVerificationEmailTemplatesResponsePrivate class provides private implementation for ListCustomVerificationEmailTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListCustomVerificationEmailTemplatesResponsePrivate object with public implementation \a q.
 */
ListCustomVerificationEmailTemplatesResponsePrivate::ListCustomVerificationEmailTemplatesResponsePrivate(
    ListCustomVerificationEmailTemplatesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListCustomVerificationEmailTemplates response element from \a xml.
 */
void ListCustomVerificationEmailTemplatesResponsePrivate::parseListCustomVerificationEmailTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomVerificationEmailTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
