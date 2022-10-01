// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSNAPSHOTREQUEST_H
#define QTAWS_CREATEDBSNAPSHOTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSnapshotRequestPrivate;

class QTAWSRDS_EXPORT CreateDBSnapshotRequest : public RdsRequest {

public:
    CreateDBSnapshotRequest(const CreateDBSnapshotRequest &other);
    CreateDBSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
