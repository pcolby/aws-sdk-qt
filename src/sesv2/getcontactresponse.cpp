// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactresponse.h"
#include "getcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetContactResponse
 * \brief The GetContactResponse class provides an interace for SESv2 GetContact responses.
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
 * \sa SESv2Client::getContact
 */

/*!
 * Constructs a GetContactResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactResponse::GetContactResponse(
        const GetContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetContactResponsePrivate(this), parent)
{
    setRequest(new GetContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactRequest * GetContactResponse::request() const
{
    Q_D(const GetContactResponse);
    return static_cast<const GetContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetContact \a response.
 */
void GetContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetContactResponsePrivate
 * \brief The GetContactResponsePrivate class provides private implementation for GetContactResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetContactResponsePrivate object with public implementation \a q.
 */
GetContactResponsePrivate::GetContactResponsePrivate(
    GetContactResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetContact response element from \a xml.
 */
void GetContactResponsePrivate::parseGetContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
