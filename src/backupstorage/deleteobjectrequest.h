// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTREQUEST_H
#define QTAWS_DELETEOBJECTREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class DeleteObjectRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT DeleteObjectRequest : public BackupStorageRequest {

public:
    DeleteObjectRequest(const DeleteObjectRequest &other);
    DeleteObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
