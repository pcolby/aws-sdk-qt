// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteverifiedemailaddressresponse.h"
#include "deleteverifiedemailaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteVerifiedEmailAddressResponse
 * \brief The DeleteVerifiedEmailAddressResponse class provides an interace for Ses DeleteVerifiedEmailAddress responses.
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
 * \sa SesClient::deleteVerifiedEmailAddress
 */

/*!
 * Constructs a DeleteVerifiedEmailAddressResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVerifiedEmailAddressResponse::DeleteVerifiedEmailAddressResponse(
        const DeleteVerifiedEmailAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteVerifiedEmailAddressResponsePrivate(this), parent)
{
    setRequest(new DeleteVerifiedEmailAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVerifiedEmailAddressRequest * DeleteVerifiedEmailAddressResponse::request() const
{
    Q_D(const DeleteVerifiedEmailAddressResponse);
    return static_cast<const DeleteVerifiedEmailAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteVerifiedEmailAddress \a response.
 */
void DeleteVerifiedEmailAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVerifiedEmailAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteVerifiedEmailAddressResponsePrivate
 * \brief The DeleteVerifiedEmailAddressResponsePrivate class provides private implementation for DeleteVerifiedEmailAddressResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteVerifiedEmailAddressResponsePrivate object with public implementation \a q.
 */
DeleteVerifiedEmailAddressResponsePrivate::DeleteVerifiedEmailAddressResponsePrivate(
    DeleteVerifiedEmailAddressResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteVerifiedEmailAddress response element from \a xml.
 */
void DeleteVerifiedEmailAddressResponsePrivate::parseDeleteVerifiedEmailAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVerifiedEmailAddressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
