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

#include "updatecontactflownameresponse.h"
#include "updatecontactflownameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateContactFlowNameResponse
 * \brief The UpdateContactFlowNameResponse class provides an interace for Connect UpdateContactFlowName responses.
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
 *  You can connect programmatically to an AWS service by using an endpoint. For a list of Amazon Connect endpoints, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with contact flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::updateContactFlowName
 */

/*!
 * Constructs a UpdateContactFlowNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactFlowNameResponse::UpdateContactFlowNameResponse(
        const UpdateContactFlowNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateContactFlowNameResponsePrivate(this), parent)
{
    setRequest(new UpdateContactFlowNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactFlowNameRequest * UpdateContactFlowNameResponse::request() const
{
    Q_D(const UpdateContactFlowNameResponse);
    return static_cast<const UpdateContactFlowNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateContactFlowName \a response.
 */
void UpdateContactFlowNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactFlowNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateContactFlowNameResponsePrivate
 * \brief The UpdateContactFlowNameResponsePrivate class provides private implementation for UpdateContactFlowNameResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateContactFlowNameResponsePrivate object with public implementation \a q.
 */
UpdateContactFlowNameResponsePrivate::UpdateContactFlowNameResponsePrivate(
    UpdateContactFlowNameResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateContactFlowName response element from \a xml.
 */
void UpdateContactFlowNameResponsePrivate::parseUpdateContactFlowNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactFlowNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
