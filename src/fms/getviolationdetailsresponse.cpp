// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getviolationdetailsresponse.h"
#include "getviolationdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetViolationDetailsResponse
 * \brief The GetViolationDetailsResponse class provides an interace for Fms GetViolationDetails responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::getViolationDetails
 */

/*!
 * Constructs a GetViolationDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetViolationDetailsResponse::GetViolationDetailsResponse(
        const GetViolationDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetViolationDetailsResponsePrivate(this), parent)
{
    setRequest(new GetViolationDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetViolationDetailsRequest * GetViolationDetailsResponse::request() const
{
    Q_D(const GetViolationDetailsResponse);
    return static_cast<const GetViolationDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms GetViolationDetails \a response.
 */
void GetViolationDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetViolationDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::GetViolationDetailsResponsePrivate
 * \brief The GetViolationDetailsResponsePrivate class provides private implementation for GetViolationDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetViolationDetailsResponsePrivate object with public implementation \a q.
 */
GetViolationDetailsResponsePrivate::GetViolationDetailsResponsePrivate(
    GetViolationDetailsResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms GetViolationDetails response element from \a xml.
 */
void GetViolationDetailsResponsePrivate::parseGetViolationDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetViolationDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
