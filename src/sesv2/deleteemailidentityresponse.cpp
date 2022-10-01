// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailidentityresponse.h"
#include "deleteemailidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityResponse
 * \brief The DeleteEmailIdentityResponse class provides an interace for SESv2 DeleteEmailIdentity responses.
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
 * \sa SESv2Client::deleteEmailIdentity
 */

/*!
 * Constructs a DeleteEmailIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailIdentityResponse::DeleteEmailIdentityResponse(
        const DeleteEmailIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteEmailIdentityResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailIdentityRequest * DeleteEmailIdentityResponse::request() const
{
    Q_D(const DeleteEmailIdentityResponse);
    return static_cast<const DeleteEmailIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 DeleteEmailIdentity \a response.
 */
void DeleteEmailIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityResponsePrivate
 * \brief The DeleteEmailIdentityResponsePrivate class provides private implementation for DeleteEmailIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteEmailIdentityResponsePrivate object with public implementation \a q.
 */
DeleteEmailIdentityResponsePrivate::DeleteEmailIdentityResponsePrivate(
    DeleteEmailIdentityResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteEmailIdentity response element from \a xml.
 */
void DeleteEmailIdentityResponsePrivate::parseDeleteEmailIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
