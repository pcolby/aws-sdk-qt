// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTREQUEST_P_H
#define QTAWS_GETACCESSPOINTREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointRequest;

class GetAccessPointRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointRequest * const q);
    GetAccessPointRequestPrivate(const GetAccessPointRequestPrivate &other,
                                   GetAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
