// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSNAPSHOTREQUEST_H
#define QTAWS_DELETEAUTOSNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteAutoSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteAutoSnapshotRequest : public LightsailRequest {

public:
    DeleteAutoSnapshotRequest(const DeleteAutoSnapshotRequest &other);
    DeleteAutoSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutoSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
