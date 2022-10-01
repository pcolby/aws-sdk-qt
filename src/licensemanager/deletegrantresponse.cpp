// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegrantresponse.h"
#include "deletegrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteGrantResponse
 * \brief The DeleteGrantResponse class provides an interace for LicenseManager DeleteGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteGrant
 */

/*!
 * Constructs a DeleteGrantResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGrantResponse::DeleteGrantResponse(
        const DeleteGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteGrantResponsePrivate(this), parent)
{
    setRequest(new DeleteGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGrantRequest * DeleteGrantResponse::request() const
{
    Q_D(const DeleteGrantResponse);
    return static_cast<const DeleteGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteGrant \a response.
 */
void DeleteGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteGrantResponsePrivate
 * \brief The DeleteGrantResponsePrivate class provides private implementation for DeleteGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteGrantResponsePrivate object with public implementation \a q.
 */
DeleteGrantResponsePrivate::DeleteGrantResponsePrivate(
    DeleteGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteGrant response element from \a xml.
 */
void DeleteGrantResponsePrivate::parseDeleteGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
