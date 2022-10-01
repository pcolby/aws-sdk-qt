// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTREQUEST_H
#define QTAWS_DELETESNAPSHOTREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteSnapshotRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteSnapshotRequest : public RedshiftServerlessRequest {

public:
    DeleteSnapshotRequest(const DeleteSnapshotRequest &other);
    DeleteSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
