// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFRAMEWORKREQUEST_H
#define QTAWS_UPDATEFRAMEWORKREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class UpdateFrameworkRequestPrivate;

class QTAWSBACKUP_EXPORT UpdateFrameworkRequest : public BackupRequest {

public:
    UpdateFrameworkRequest(const UpdateFrameworkRequest &other);
    UpdateFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
