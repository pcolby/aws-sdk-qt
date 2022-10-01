// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSTREAMREQUEST_H
#define QTAWS_PUTEVENTSTREAMREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class PutEventStreamRequestPrivate;

class QTAWSPINPOINT_EXPORT PutEventStreamRequest : public PinpointRequest {

public:
    PutEventStreamRequest(const PutEventStreamRequest &other);
    PutEventStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventStreamRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
