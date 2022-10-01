// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTREQUEST_P_H
#define QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "convertrecoverypointtosnapshotrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ConvertRecoveryPointToSnapshotRequest;

class ConvertRecoveryPointToSnapshotRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    ConvertRecoveryPointToSnapshotRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   ConvertRecoveryPointToSnapshotRequest * const q);
    ConvertRecoveryPointToSnapshotRequestPrivate(const ConvertRecoveryPointToSnapshotRequestPrivate &other,
                                   ConvertRecoveryPointToSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConvertRecoveryPointToSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
