// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPREQUEST_H
#define QTAWS_DELETEBACKUPREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DeleteBackupRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT DeleteBackupRequest : public OpsWorksCmRequest {

public:
    DeleteBackupRequest(const DeleteBackupRequest &other);
    DeleteBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
