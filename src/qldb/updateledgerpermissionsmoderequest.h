// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERPERMISSIONSMODEREQUEST_H
#define QTAWS_UPDATELEDGERPERMISSIONSMODEREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerPermissionsModeRequestPrivate;

class QTAWSQLDB_EXPORT UpdateLedgerPermissionsModeRequest : public QldbRequest {

public:
    UpdateLedgerPermissionsModeRequest(const UpdateLedgerPermissionsModeRequest &other);
    UpdateLedgerPermissionsModeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLedgerPermissionsModeRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
