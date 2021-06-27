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

#include "invokescreenautomationresponse.h"
#include "invokescreenautomationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::InvokeScreenAutomationResponse
 * \brief The InvokeScreenAutomationResponse class provides an interace for Honeycode InvokeScreenAutomation responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::invokeScreenAutomation
 */

/*!
 * Constructs a InvokeScreenAutomationResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeScreenAutomationResponse::InvokeScreenAutomationResponse(
        const InvokeScreenAutomationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new InvokeScreenAutomationResponsePrivate(this), parent)
{
    setRequest(new InvokeScreenAutomationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvokeScreenAutomationRequest * InvokeScreenAutomationResponse::request() const
{
    return static_cast<const InvokeScreenAutomationRequest *>(HoneycodeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Honeycode InvokeScreenAutomation \a response.
 */
void InvokeScreenAutomationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvokeScreenAutomationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::InvokeScreenAutomationResponsePrivate
 * \brief The InvokeScreenAutomationResponsePrivate class provides private implementation for InvokeScreenAutomationResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a InvokeScreenAutomationResponsePrivate object with public implementation \a q.
 */
InvokeScreenAutomationResponsePrivate::InvokeScreenAutomationResponsePrivate(
    InvokeScreenAutomationResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode InvokeScreenAutomation response element from \a xml.
 */
void InvokeScreenAutomationResponsePrivate::parseInvokeScreenAutomationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeScreenAutomationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
