// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const InvokeScreenAutomationResponse);
    return static_cast<const InvokeScreenAutomationRequest *>(d->request);
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
