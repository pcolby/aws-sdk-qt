// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSREQUEST_H
#define QTAWS_PUTEVENTSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class PutEventsRequestPrivate;

class QTAWSPINPOINT_EXPORT PutEventsRequest : public PinpointRequest {

public:
    PutEventsRequest(const PutEventsRequest &other);
    PutEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
