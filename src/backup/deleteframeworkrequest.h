// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAMEWORKREQUEST_H
#define QTAWS_DELETEFRAMEWORKREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteFrameworkRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteFrameworkRequest : public BackupRequest {

public:
    DeleteFrameworkRequest(const DeleteFrameworkRequest &other);
    DeleteFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
