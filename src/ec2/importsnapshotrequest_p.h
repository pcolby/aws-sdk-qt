// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSNAPSHOTREQUEST_P_H
#define QTAWS_IMPORTSNAPSHOTREQUEST_P_H

#include "ec2request_p.h"
#include "importsnapshotrequest.h"

namespace QtAws {
namespace Ec2 {

class ImportSnapshotRequest;

class ImportSnapshotRequestPrivate : public Ec2RequestPrivate {

public:
    ImportSnapshotRequestPrivate(const Ec2Request::Action action,
                                   ImportSnapshotRequest * const q);
    ImportSnapshotRequestPrivate(const ImportSnapshotRequestPrivate &other,
                                   ImportSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportSnapshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
