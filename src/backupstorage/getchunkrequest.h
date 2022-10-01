// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHUNKREQUEST_H
#define QTAWS_GETCHUNKREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class GetChunkRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT GetChunkRequest : public BackupStorageRequest {

public:
    GetChunkRequest(const GetChunkRequest &other);
    GetChunkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChunkRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
