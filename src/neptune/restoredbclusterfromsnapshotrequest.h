// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTREQUEST_H
#define QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class RestoreDBClusterFromSnapshotRequestPrivate;

class QTAWSNEPTUNE_EXPORT RestoreDBClusterFromSnapshotRequest : public NeptuneRequest {

public:
    RestoreDBClusterFromSnapshotRequest(const RestoreDBClusterFromSnapshotRequest &other);
    RestoreDBClusterFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterFromSnapshotRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
