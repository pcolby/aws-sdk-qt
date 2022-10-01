// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateSnapshotRequest;

class CreateSnapshotRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    CreateSnapshotRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   CreateSnapshotRequest * const q);
    CreateSnapshotRequestPrivate(const CreateSnapshotRequestPrivate &other,
                                   CreateSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
