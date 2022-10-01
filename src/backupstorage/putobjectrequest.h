// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTREQUEST_H
#define QTAWS_PUTOBJECTREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class PutObjectRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT PutObjectRequest : public BackupStorageRequest {

public:
    PutObjectRequest(const PutObjectRequest &other);
    PutObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
