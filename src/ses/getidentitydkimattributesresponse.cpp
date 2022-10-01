// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitydkimattributesresponse.h"
#include "getidentitydkimattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityDkimAttributesResponse
 * \brief The GetIdentityDkimAttributesResponse class provides an interace for Ses GetIdentityDkimAttributes responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getIdentityDkimAttributes
 */

/*!
 * Constructs a GetIdentityDkimAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityDkimAttributesResponse::GetIdentityDkimAttributesResponse(
        const GetIdentityDkimAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityDkimAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityDkimAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityDkimAttributesRequest * GetIdentityDkimAttributesResponse::request() const
{
    Q_D(const GetIdentityDkimAttributesResponse);
    return static_cast<const GetIdentityDkimAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetIdentityDkimAttributes \a response.
 */
void GetIdentityDkimAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityDkimAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetIdentityDkimAttributesResponsePrivate
 * \brief The GetIdentityDkimAttributesResponsePrivate class provides private implementation for GetIdentityDkimAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityDkimAttributesResponsePrivate object with public implementation \a q.
 */
GetIdentityDkimAttributesResponsePrivate::GetIdentityDkimAttributesResponsePrivate(
    GetIdentityDkimAttributesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetIdentityDkimAttributes response element from \a xml.
 */
void GetIdentityDkimAttributesResponsePrivate::parseGetIdentityDkimAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityDkimAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
