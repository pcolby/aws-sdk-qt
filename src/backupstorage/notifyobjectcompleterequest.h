// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYOBJECTCOMPLETEREQUEST_H
#define QTAWS_NOTIFYOBJECTCOMPLETEREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class NotifyObjectCompleteRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT NotifyObjectCompleteRequest : public BackupStorageRequest {

public:
    NotifyObjectCompleteRequest(const NotifyObjectCompleteRequest &other);
    NotifyObjectCompleteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyObjectCompleteRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
