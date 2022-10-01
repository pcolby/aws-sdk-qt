// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTCOPYGRANTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTCOPYGRANTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createsnapshotcopygrantrequest.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotCopyGrantRequest;

class CreateSnapshotCopyGrantRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateSnapshotCopyGrantRequestPrivate(const RedshiftRequest::Action action,
                                   CreateSnapshotCopyGrantRequest * const q);
    CreateSnapshotCopyGrantRequestPrivate(const CreateSnapshotCopyGrantRequestPrivate &other,
                                   CreateSnapshotCopyGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotCopyGrantRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
