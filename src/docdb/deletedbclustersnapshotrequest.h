// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_DELETEDBCLUSTERSNAPSHOTREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBClusterSnapshotRequestPrivate;

class QTAWSDOCDB_EXPORT DeleteDBClusterSnapshotRequest : public DocDbRequest {

public:
    DeleteDBClusterSnapshotRequest(const DeleteDBClusterSnapshotRequest &other);
    DeleteDBClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterSnapshotRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
