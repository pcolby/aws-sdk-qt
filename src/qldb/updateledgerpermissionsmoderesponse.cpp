// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateledgerpermissionsmoderesponse.h"
#include "updateledgerpermissionsmoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::UpdateLedgerPermissionsModeResponse
 * \brief The UpdateLedgerPermissionsModeResponse class provides an interace for Qldb UpdateLedgerPermissionsMode responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::updateLedgerPermissionsMode
 */

/*!
 * Constructs a UpdateLedgerPermissionsModeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLedgerPermissionsModeResponse::UpdateLedgerPermissionsModeResponse(
        const UpdateLedgerPermissionsModeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new UpdateLedgerPermissionsModeResponsePrivate(this), parent)
{
    setRequest(new UpdateLedgerPermissionsModeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLedgerPermissionsModeRequest * UpdateLedgerPermissionsModeResponse::request() const
{
    Q_D(const UpdateLedgerPermissionsModeResponse);
    return static_cast<const UpdateLedgerPermissionsModeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb UpdateLedgerPermissionsMode \a response.
 */
void UpdateLedgerPermissionsModeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLedgerPermissionsModeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::UpdateLedgerPermissionsModeResponsePrivate
 * \brief The UpdateLedgerPermissionsModeResponsePrivate class provides private implementation for UpdateLedgerPermissionsModeResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a UpdateLedgerPermissionsModeResponsePrivate object with public implementation \a q.
 */
UpdateLedgerPermissionsModeResponsePrivate::UpdateLedgerPermissionsModeResponsePrivate(
    UpdateLedgerPermissionsModeResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb UpdateLedgerPermissionsMode response element from \a xml.
 */
void UpdateLedgerPermissionsModeResponsePrivate::parseUpdateLedgerPermissionsModeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLedgerPermissionsModeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
