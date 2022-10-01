/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatecontactlistresponse.h"
#include "updatecontactlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateContactListResponse
 * \brief The UpdateContactListResponse class provides an interace for SESv2 UpdateContactList responses.
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
 * \sa SESv2Client::updateContactList
 */

/*!
 * Constructs a UpdateContactListResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactListResponse::UpdateContactListResponse(
        const UpdateContactListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new UpdateContactListResponsePrivate(this), parent)
{
    setRequest(new UpdateContactListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactListRequest * UpdateContactListResponse::request() const
{
    Q_D(const UpdateContactListResponse);
    return static_cast<const UpdateContactListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 UpdateContactList \a response.
 */
void UpdateContactListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::UpdateContactListResponsePrivate
 * \brief The UpdateContactListResponsePrivate class provides private implementation for UpdateContactListResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateContactListResponsePrivate object with public implementation \a q.
 */
UpdateContactListResponsePrivate::UpdateContactListResponsePrivate(
    UpdateContactListResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 UpdateContactList response element from \a xml.
 */
void UpdateContactListResponsePrivate::parseUpdateContactListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
