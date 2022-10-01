// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendactivationcoderesponse.h"
#include "sendactivationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::SendActivationCodeResponse
 * \brief The SendActivationCodeResponse class provides an interace for SsmContacts SendActivationCode responses.
 *
 * \inmodule QtAwsSsmContacts
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmContactsClient::sendActivationCode
 */

/*!
 * Constructs a SendActivationCodeResponse object for \a reply to \a request, with parent \a parent.
 */
SendActivationCodeResponse::SendActivationCodeResponse(
        const SendActivationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmContactsResponse(new SendActivationCodeResponsePrivate(this), parent)
{
    setRequest(new SendActivationCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendActivationCodeRequest * SendActivationCodeResponse::request() const
{
    Q_D(const SendActivationCodeResponse);
    return static_cast<const SendActivationCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmContacts SendActivationCode \a response.
 */
void SendActivationCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendActivationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmContacts::SendActivationCodeResponsePrivate
 * \brief The SendActivationCodeResponsePrivate class provides private implementation for SendActivationCodeResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a SendActivationCodeResponsePrivate object with public implementation \a q.
 */
SendActivationCodeResponsePrivate::SendActivationCodeResponsePrivate(
    SendActivationCodeResponse * const q) : SsmContactsResponsePrivate(q)
{

}

/*!
 * Parses a SsmContacts SendActivationCode response element from \a xml.
 */
void SendActivationCodeResponsePrivate::parseSendActivationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendActivationCodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmContacts
} // namespace QtAws
