// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESNAPSHOTREQUEST_H
#define QTAWS_UPDATESNAPSHOTREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateSnapshotRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT UpdateSnapshotRequest : public RedshiftServerlessRequest {

public:
    UpdateSnapshotRequest(const UpdateSnapshotRequest &other);
    UpdateSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
