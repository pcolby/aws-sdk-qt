// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateproactiveengagementdetailsresponse.h"
#include "associateproactiveengagementdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateProactiveEngagementDetailsResponse
 * \brief The AssociateProactiveEngagementDetailsResponse class provides an interace for Shield AssociateProactiveEngagementDetails responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::associateProactiveEngagementDetails
 */

/*!
 * Constructs a AssociateProactiveEngagementDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateProactiveEngagementDetailsResponse::AssociateProactiveEngagementDetailsResponse(
        const AssociateProactiveEngagementDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new AssociateProactiveEngagementDetailsResponsePrivate(this), parent)
{
    setRequest(new AssociateProactiveEngagementDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateProactiveEngagementDetailsRequest * AssociateProactiveEngagementDetailsResponse::request() const
{
    Q_D(const AssociateProactiveEngagementDetailsResponse);
    return static_cast<const AssociateProactiveEngagementDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield AssociateProactiveEngagementDetails \a response.
 */
void AssociateProactiveEngagementDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateProactiveEngagementDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::AssociateProactiveEngagementDetailsResponsePrivate
 * \brief The AssociateProactiveEngagementDetailsResponsePrivate class provides private implementation for AssociateProactiveEngagementDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateProactiveEngagementDetailsResponsePrivate object with public implementation \a q.
 */
AssociateProactiveEngagementDetailsResponsePrivate::AssociateProactiveEngagementDetailsResponsePrivate(
    AssociateProactiveEngagementDetailsResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield AssociateProactiveEngagementDetails response element from \a xml.
 */
void AssociateProactiveEngagementDetailsResponsePrivate::parseAssociateProactiveEngagementDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateProactiveEngagementDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
