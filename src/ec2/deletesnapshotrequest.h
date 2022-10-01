// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTREQUEST_H
#define QTAWS_DELETESNAPSHOTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteSnapshotRequestPrivate;

class QTAWSEC2_EXPORT DeleteSnapshotRequest : public Ec2Request {

public:
    DeleteSnapshotRequest(const DeleteSnapshotRequest &other);
    DeleteSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSnapshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
