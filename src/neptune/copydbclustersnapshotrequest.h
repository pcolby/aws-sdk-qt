// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class CopyDBClusterSnapshotRequestPrivate;

class QTAWSNEPTUNE_EXPORT CopyDBClusterSnapshotRequest : public NeptuneRequest {

public:
    CopyDBClusterSnapshotRequest(const CopyDBClusterSnapshotRequest &other);
    CopyDBClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterSnapshotRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
