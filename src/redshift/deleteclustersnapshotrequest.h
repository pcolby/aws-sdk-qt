// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSNAPSHOTREQUEST_H
#define QTAWS_DELETECLUSTERSNAPSHOTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSnapshotRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterSnapshotRequest : public RedshiftRequest {

public:
    DeleteClusterSnapshotRequest(const DeleteClusterSnapshotRequest &other);
    DeleteClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
