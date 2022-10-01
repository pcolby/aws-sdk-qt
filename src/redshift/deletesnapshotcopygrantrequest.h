// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTCOPYGRANTREQUEST_H
#define QTAWS_DELETESNAPSHOTCOPYGRANTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteSnapshotCopyGrantRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteSnapshotCopyGrantRequest : public RedshiftRequest {

public:
    DeleteSnapshotCopyGrantRequest(const DeleteSnapshotCopyGrantRequest &other);
    DeleteSnapshotCopyGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotCopyGrantRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
