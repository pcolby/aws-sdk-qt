// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprotectionresponse.h"
#include "deleteprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteProtectionResponse
 * \brief The DeleteProtectionResponse class provides an interace for Shield DeleteProtection responses.
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
 * \sa ShieldClient::deleteProtection
 */

/*!
 * Constructs a DeleteProtectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProtectionResponse::DeleteProtectionResponse(
        const DeleteProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DeleteProtectionResponsePrivate(this), parent)
{
    setRequest(new DeleteProtectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProtectionRequest * DeleteProtectionResponse::request() const
{
    Q_D(const DeleteProtectionResponse);
    return static_cast<const DeleteProtectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DeleteProtection \a response.
 */
void DeleteProtectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DeleteProtectionResponsePrivate
 * \brief The DeleteProtectionResponsePrivate class provides private implementation for DeleteProtectionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DeleteProtectionResponsePrivate object with public implementation \a q.
 */
DeleteProtectionResponsePrivate::DeleteProtectionResponsePrivate(
    DeleteProtectionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DeleteProtection response element from \a xml.
 */
void DeleteProtectionResponsePrivate::parseDeleteProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProtectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
