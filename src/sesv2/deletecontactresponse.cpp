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

#include "deletecontactresponse.h"
#include "deletecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteContactResponse
 * \brief The DeleteContactResponse class provides an interace for SESv2 DeleteContact responses.
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
 * \sa SESv2Client::deleteContact
 */

/*!
 * Constructs a DeleteContactResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContactResponse::DeleteContactResponse(
        const DeleteContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteContactResponsePrivate(this), parent)
{
    setRequest(new DeleteContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContactRequest * DeleteContactResponse::request() const
{
    Q_D(const DeleteContactResponse);
    return static_cast<const DeleteContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 DeleteContact \a response.
 */
void DeleteContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteContactResponsePrivate
 * \brief The DeleteContactResponsePrivate class provides private implementation for DeleteContactResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteContactResponsePrivate object with public implementation \a q.
 */
DeleteContactResponsePrivate::DeleteContactResponsePrivate(
    DeleteContactResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteContact response element from \a xml.
 */
void DeleteContactResponsePrivate::parseDeleteContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
