// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCESNAPSHOTREQUEST_H
#define QTAWS_DELETEINSTANCESNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteInstanceSnapshotRequest : public LightsailRequest {

public:
    DeleteInstanceSnapshotRequest(const DeleteInstanceSnapshotRequest &other);
    DeleteInstanceSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
