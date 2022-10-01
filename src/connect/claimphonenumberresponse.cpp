// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "claimphonenumberresponse.h"
#include "claimphonenumberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ClaimPhoneNumberResponse
 * \brief The ClaimPhoneNumberResponse class provides an interace for Connect ClaimPhoneNumber responses.
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
 * \sa ConnectClient::claimPhoneNumber
 */

/*!
 * Constructs a ClaimPhoneNumberResponse object for \a reply to \a request, with parent \a parent.
 */
ClaimPhoneNumberResponse::ClaimPhoneNumberResponse(
        const ClaimPhoneNumberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new ClaimPhoneNumberResponsePrivate(this), parent)
{
    setRequest(new ClaimPhoneNumberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClaimPhoneNumberRequest * ClaimPhoneNumberResponse::request() const
{
    Q_D(const ClaimPhoneNumberResponse);
    return static_cast<const ClaimPhoneNumberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect ClaimPhoneNumber \a response.
 */
void ClaimPhoneNumberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClaimPhoneNumberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::ClaimPhoneNumberResponsePrivate
 * \brief The ClaimPhoneNumberResponsePrivate class provides private implementation for ClaimPhoneNumberResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ClaimPhoneNumberResponsePrivate object with public implementation \a q.
 */
ClaimPhoneNumberResponsePrivate::ClaimPhoneNumberResponsePrivate(
    ClaimPhoneNumberResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect ClaimPhoneNumber response element from \a xml.
 */
void ClaimPhoneNumberResponsePrivate::parseClaimPhoneNumberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClaimPhoneNumberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
