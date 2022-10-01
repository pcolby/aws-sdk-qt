// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTREQUEST_H
#define QTAWS_CONVERTRECOVERYPOINTTOSNAPSHOTREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ConvertRecoveryPointToSnapshotRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ConvertRecoveryPointToSnapshotRequest : public RedshiftServerlessRequest {

public:
    ConvertRecoveryPointToSnapshotRequest(const ConvertRecoveryPointToSnapshotRequest &other);
    ConvertRecoveryPointToSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConvertRecoveryPointToSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
