// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESEGMENTREQUEST_H
#define QTAWS_CREATESEGMENTREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateSegmentRequestPrivate;

class QTAWSPINPOINT_EXPORT CreateSegmentRequest : public PinpointRequest {

public:
    CreateSegmentRequest(const CreateSegmentRequest &other);
    CreateSegmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSegmentRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
