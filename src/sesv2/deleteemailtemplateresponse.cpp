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

#include "deleteemailtemplateresponse.h"
#include "deleteemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteEmailTemplateResponse
 * \brief The DeleteEmailTemplateResponse class provides an interace for SESv2 DeleteEmailTemplate responses.
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
 * \sa SESv2Client::deleteEmailTemplate
 */

/*!
 * Constructs a DeleteEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailTemplateResponse::DeleteEmailTemplateResponse(
        const DeleteEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailTemplateRequest * DeleteEmailTemplateResponse::request() const
{
    Q_D(const DeleteEmailTemplateResponse);
    return static_cast<const DeleteEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 DeleteEmailTemplate \a response.
 */
void DeleteEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteEmailTemplateResponsePrivate
 * \brief The DeleteEmailTemplateResponsePrivate class provides private implementation for DeleteEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteEmailTemplateResponsePrivate object with public implementation \a q.
 */
DeleteEmailTemplateResponsePrivate::DeleteEmailTemplateResponsePrivate(
    DeleteEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteEmailTemplate response element from \a xml.
 */
void DeleteEmailTemplateResponsePrivate::parseDeleteEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
