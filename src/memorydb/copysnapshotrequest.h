// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTREQUEST_H
#define QTAWS_COPYSNAPSHOTREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class CopySnapshotRequestPrivate;

class QTAWSMEMORYDB_EXPORT CopySnapshotRequest : public MemoryDbRequest {

public:
    CopySnapshotRequest(const CopySnapshotRequest &other);
    CopySnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopySnapshotRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
