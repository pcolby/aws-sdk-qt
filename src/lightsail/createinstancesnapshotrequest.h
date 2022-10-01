// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESNAPSHOTREQUEST_H
#define QTAWS_CREATEINSTANCESNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstanceSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateInstanceSnapshotRequest : public LightsailRequest {

public:
    CreateInstanceSnapshotRequest(const CreateInstanceSnapshotRequest &other);
    CreateInstanceSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
