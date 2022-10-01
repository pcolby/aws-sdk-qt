// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactresponse.h"
#include "updatecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateContactResponse
 * \brief The UpdateContactResponse class provides an interace for SESv2 UpdateContact responses.
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
 * \sa SESv2Client::updateContact
 */

/*!
 * Constructs a UpdateContactResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactResponse::UpdateContactResponse(
        const UpdateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new UpdateContactResponsePrivate(this), parent)
{
    setRequest(new UpdateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactRequest * UpdateContactResponse::request() const
{
    Q_D(const UpdateContactResponse);
    return static_cast<const UpdateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 UpdateContact \a response.
 */
void UpdateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::UpdateContactResponsePrivate
 * \brief The UpdateContactResponsePrivate class provides private implementation for UpdateContactResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateContactResponsePrivate object with public implementation \a q.
 */
UpdateContactResponsePrivate::UpdateContactResponsePrivate(
    UpdateContactResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 UpdateContact response element from \a xml.
 */
void UpdateContactResponsePrivate::parseUpdateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
