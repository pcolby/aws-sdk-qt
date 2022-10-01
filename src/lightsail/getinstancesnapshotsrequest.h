// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESNAPSHOTSREQUEST_H
#define QTAWS_GETINSTANCESNAPSHOTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceSnapshotsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceSnapshotsRequest : public LightsailRequest {

public:
    GetInstanceSnapshotsRequest(const GetInstanceSnapshotsRequest &other);
    GetInstanceSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
