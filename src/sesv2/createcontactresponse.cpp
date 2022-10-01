// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontactresponse.h"
#include "createcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateContactResponse
 * \brief The CreateContactResponse class provides an interace for SESv2 CreateContact responses.
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
 * \sa SESv2Client::createContact
 */

/*!
 * Constructs a CreateContactResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContactResponse::CreateContactResponse(
        const CreateContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateContactResponsePrivate(this), parent)
{
    setRequest(new CreateContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContactRequest * CreateContactResponse::request() const
{
    Q_D(const CreateContactResponse);
    return static_cast<const CreateContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateContact \a response.
 */
void CreateContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateContactResponsePrivate
 * \brief The CreateContactResponsePrivate class provides private implementation for CreateContactResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateContactResponsePrivate object with public implementation \a q.
 */
CreateContactResponsePrivate::CreateContactResponsePrivate(
    CreateContactResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateContact response element from \a xml.
 */
void CreateContactResponsePrivate::parseCreateContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
