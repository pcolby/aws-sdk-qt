// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMSNAPSHOTREQUEST_H
#define QTAWS_RESTOREFROMSNAPSHOTREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class RestoreFromSnapshotRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT RestoreFromSnapshotRequest : public RedshiftServerlessRequest {

public:
    RestoreFromSnapshotRequest(const RestoreFromSnapshotRequest &other);
    RestoreFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreFromSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
