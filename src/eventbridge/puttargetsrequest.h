// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTARGETSREQUEST_H
#define QTAWS_PUTTARGETSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class PutTargetsRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT PutTargetsRequest : public EventBridgeRequest {

public:
    PutTargetsRequest(const PutTargetsRequest &other);
    PutTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutTargetsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
