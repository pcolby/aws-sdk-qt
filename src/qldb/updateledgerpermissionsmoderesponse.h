// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERPERMISSIONSMODERESPONSE_H
#define QTAWS_UPDATELEDGERPERMISSIONSMODERESPONSE_H

#include "qldbresponse.h"
#include "updateledgerpermissionsmoderequest.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerPermissionsModeResponsePrivate;

class QTAWSQLDB_EXPORT UpdateLedgerPermissionsModeResponse : public QldbResponse {
    Q_OBJECT

public:
    UpdateLedgerPermissionsModeResponse(const UpdateLedgerPermissionsModeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLedgerPermissionsModeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLedgerPermissionsModeResponse)
    Q_DISABLE_COPY(UpdateLedgerPermissionsModeResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
