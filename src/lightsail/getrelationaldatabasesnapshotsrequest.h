// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESNAPSHOTSREQUEST_H
#define QTAWS_GETRELATIONALDATABASESNAPSHOTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseSnapshotsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseSnapshotsRequest : public LightsailRequest {

public:
    GetRelationalDatabaseSnapshotsRequest(const GetRelationalDatabaseSnapshotsRequest &other);
    GetRelationalDatabaseSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
