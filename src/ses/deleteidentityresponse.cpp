// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentityresponse.h"
#include "deleteidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteIdentityResponse
 * \brief The DeleteIdentityResponse class provides an interace for Ses DeleteIdentity responses.
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
 * \sa SesClient::deleteIdentity
 */

/*!
 * Constructs a DeleteIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityResponse::DeleteIdentityResponse(
        const DeleteIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteIdentityResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityRequest * DeleteIdentityResponse::request() const
{
    Q_D(const DeleteIdentityResponse);
    return static_cast<const DeleteIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteIdentity \a response.
 */
void DeleteIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteIdentityResponsePrivate
 * \brief The DeleteIdentityResponsePrivate class provides private implementation for DeleteIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteIdentityResponsePrivate object with public implementation \a q.
 */
DeleteIdentityResponsePrivate::DeleteIdentityResponsePrivate(
    DeleteIdentityResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteIdentity response element from \a xml.
 */
void DeleteIdentityResponsePrivate::parseDeleteIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
