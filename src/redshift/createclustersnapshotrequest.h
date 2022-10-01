// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSNAPSHOTREQUEST_H
#define QTAWS_CREATECLUSTERSNAPSHOTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSnapshotRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterSnapshotRequest : public RedshiftRequest {

public:
    CreateClusterSnapshotRequest(const CreateClusterSnapshotRequest &other);
    CreateClusterSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
