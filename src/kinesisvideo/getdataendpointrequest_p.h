// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAENDPOINTREQUEST_P_H
#define QTAWS_GETDATAENDPOINTREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "getdataendpointrequest.h"

namespace QtAws {
namespace KinesisVideo {

class GetDataEndpointRequest;

class GetDataEndpointRequestPrivate : public KinesisVideoRequestPrivate {

public:
    GetDataEndpointRequestPrivate(const KinesisVideoRequest::Action action,
                                   GetDataEndpointRequest * const q);
    GetDataEndpointRequestPrivate(const GetDataEndpointRequestPrivate &other,
                                   GetDataEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataEndpointRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
