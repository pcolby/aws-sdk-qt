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

#include "updatecontactattributesresponse.h"
#include "updatecontactattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateContactAttributesResponse
 * \brief The UpdateContactAttributesResponse class provides an interace for Connect UpdateContactAttributes responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::updateContactAttributes
 */

/*!
 * Constructs a UpdateContactAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactAttributesResponse::UpdateContactAttributesResponse(
        const UpdateContactAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateContactAttributesResponsePrivate(this), parent)
{
    setRequest(new UpdateContactAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactAttributesRequest * UpdateContactAttributesResponse::request() const
{
    Q_D(const UpdateContactAttributesResponse);
    return static_cast<const UpdateContactAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateContactAttributes \a response.
 */
void UpdateContactAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateContactAttributesResponsePrivate
 * \brief The UpdateContactAttributesResponsePrivate class provides private implementation for UpdateContactAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateContactAttributesResponsePrivate object with public implementation \a q.
 */
UpdateContactAttributesResponsePrivate::UpdateContactAttributesResponsePrivate(
    UpdateContactAttributesResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateContactAttributes response element from \a xml.
 */
void UpdateContactAttributesResponsePrivate::parseUpdateContactAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
