/*
    Copyright 2013-2019 Paul Colby

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

#include "createemailidentityresponse.h"
#include "createemailidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::CreateEmailIdentityResponse
 * \brief The CreateEmailIdentityResponse class provides an interace for PinpointEmail CreateEmailIdentity responses.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in the US East (N. Virginia), US West (Oregon) and the EU (Ireland) Regions
 *  at the following
 * 
 *  endpoints> <ul> <li>
 * 
 *  <b>US East (N. Virginia)</b>: <code>email.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>US West (Oregon)</b>: <code>email.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>EU (Ireland)</b>: <code>email.eu-west-1.amazonaws.com</code>
 *
 * \sa PinpointEmailClient::createEmailIdentity
 */

/*!
 * Constructs a CreateEmailIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEmailIdentityResponse::CreateEmailIdentityResponse(
        const CreateEmailIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new CreateEmailIdentityResponsePrivate(this), parent)
{
    setRequest(new CreateEmailIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEmailIdentityRequest * CreateEmailIdentityResponse::request() const
{
    Q_D(const CreateEmailIdentityResponse);
    return static_cast<const CreateEmailIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail CreateEmailIdentity \a response.
 */
void CreateEmailIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEmailIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::CreateEmailIdentityResponsePrivate
 * \brief The CreateEmailIdentityResponsePrivate class provides private implementation for CreateEmailIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a CreateEmailIdentityResponsePrivate object with public implementation \a q.
 */
CreateEmailIdentityResponsePrivate::CreateEmailIdentityResponsePrivate(
    CreateEmailIdentityResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail CreateEmailIdentity response element from \a xml.
 */
void CreateEmailIdentityResponsePrivate::parseCreateEmailIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEmailIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
