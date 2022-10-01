// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSNAPSHOTSREQUEST_H
#define QTAWS_GETAUTOSNAPSHOTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetAutoSnapshotsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetAutoSnapshotsRequest : public LightsailRequest {

public:
    GetAutoSnapshotsRequest(const GetAutoSnapshotsRequest &other);
    GetAutoSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutoSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
