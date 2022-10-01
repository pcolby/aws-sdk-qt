// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBSNAPSHOTREQUEST_H
#define QTAWS_COPYDBSNAPSHOTREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBSnapshotRequestPrivate;

class QTAWSRDS_EXPORT CopyDBSnapshotRequest : public RdsRequest {

public:
    CopyDBSnapshotRequest(const CopyDBSnapshotRequest &other);
    CopyDBSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
