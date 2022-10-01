// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHUNKREQUEST_H
#define QTAWS_PUTCHUNKREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class PutChunkRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT PutChunkRequest : public BackupStorageRequest {

public:
    PutChunkRequest(const PutChunkRequest &other);
    PutChunkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutChunkRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
