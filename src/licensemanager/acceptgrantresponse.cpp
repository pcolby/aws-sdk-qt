// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptgrantresponse.h"
#include "acceptgrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::AcceptGrantResponse
 * \brief The AcceptGrantResponse class provides an interace for LicenseManager AcceptGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::acceptGrant
 */

/*!
 * Constructs a AcceptGrantResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptGrantResponse::AcceptGrantResponse(
        const AcceptGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new AcceptGrantResponsePrivate(this), parent)
{
    setRequest(new AcceptGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptGrantRequest * AcceptGrantResponse::request() const
{
    Q_D(const AcceptGrantResponse);
    return static_cast<const AcceptGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager AcceptGrant \a response.
 */
void AcceptGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::AcceptGrantResponsePrivate
 * \brief The AcceptGrantResponsePrivate class provides private implementation for AcceptGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a AcceptGrantResponsePrivate object with public implementation \a q.
 */
AcceptGrantResponsePrivate::AcceptGrantResponsePrivate(
    AcceptGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager AcceptGrant response element from \a xml.
 */
void AcceptGrantResponsePrivate::parseAcceptGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
