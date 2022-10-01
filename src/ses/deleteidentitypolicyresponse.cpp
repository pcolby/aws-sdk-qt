// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentitypolicyresponse.h"
#include "deleteidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteIdentityPolicyResponse
 * \brief The DeleteIdentityPolicyResponse class provides an interace for Ses DeleteIdentityPolicy responses.
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
 * \sa SesClient::deleteIdentityPolicy
 */

/*!
 * Constructs a DeleteIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityPolicyResponse::DeleteIdentityPolicyResponse(
        const DeleteIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityPolicyRequest * DeleteIdentityPolicyResponse::request() const
{
    Q_D(const DeleteIdentityPolicyResponse);
    return static_cast<const DeleteIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteIdentityPolicy \a response.
 */
void DeleteIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteIdentityPolicyResponsePrivate
 * \brief The DeleteIdentityPolicyResponsePrivate class provides private implementation for DeleteIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteIdentityPolicyResponsePrivate object with public implementation \a q.
 */
DeleteIdentityPolicyResponsePrivate::DeleteIdentityPolicyResponsePrivate(
    DeleteIdentityPolicyResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteIdentityPolicy response element from \a xml.
 */
void DeleteIdentityPolicyResponsePrivate::parseDeleteIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
