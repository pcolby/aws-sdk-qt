// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class CopyDBClusterSnapshotRequestPrivate;

class QTAWSDOCDB_EXPORT CopyDBClusterSnapshotRequest : public DocDbRequest {

public:
    CopyDBClusterSnapshotRequest(const CopyDBClusterSnapshotRequest &other);
    CopyDBClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterSnapshotRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
