// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELIVERCONFIGSNAPSHOTREQUEST_H
#define QTAWS_DELIVERCONFIGSNAPSHOTREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeliverConfigSnapshotRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeliverConfigSnapshotRequest : public ConfigServiceRequest {

public:
    DeliverConfigSnapshotRequest(const DeliverConfigSnapshotRequest &other);
    DeliverConfigSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeliverConfigSnapshotRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
