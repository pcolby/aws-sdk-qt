// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHREQUEST_P_H
#define QTAWS_PUBLISHREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "publishrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class PublishRequest;

class PublishRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    PublishRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   PublishRequest * const q);
    PublishRequestPrivate(const PublishRequestPrivate &other,
                                   PublishRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
