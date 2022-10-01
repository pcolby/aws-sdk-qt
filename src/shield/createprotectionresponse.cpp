// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprotectionresponse.h"
#include "createprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::CreateProtectionResponse
 * \brief The CreateProtectionResponse class provides an interace for Shield CreateProtection responses.
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
 * \sa ShieldClient::createProtection
 */

/*!
 * Constructs a CreateProtectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProtectionResponse::CreateProtectionResponse(
        const CreateProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new CreateProtectionResponsePrivate(this), parent)
{
    setRequest(new CreateProtectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProtectionRequest * CreateProtectionResponse::request() const
{
    Q_D(const CreateProtectionResponse);
    return static_cast<const CreateProtectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield CreateProtection \a response.
 */
void CreateProtectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::CreateProtectionResponsePrivate
 * \brief The CreateProtectionResponsePrivate class provides private implementation for CreateProtectionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a CreateProtectionResponsePrivate object with public implementation \a q.
 */
CreateProtectionResponsePrivate::CreateProtectionResponsePrivate(
    CreateProtectionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield CreateProtection response element from \a xml.
 */
void CreateProtectionResponsePrivate::parseCreateProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProtectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
