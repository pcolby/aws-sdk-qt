// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETICESERVERCONFIGREQUEST_P_H
#define QTAWS_GETICESERVERCONFIGREQUEST_P_H

#include "kinesisvideosignalingrequest_p.h"
#include "geticeserverconfigrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class GetIceServerConfigRequest;

class GetIceServerConfigRequestPrivate : public KinesisVideoSignalingRequestPrivate {

public:
    GetIceServerConfigRequestPrivate(const KinesisVideoSignalingRequest::Action action,
                                   GetIceServerConfigRequest * const q);
    GetIceServerConfigRequestPrivate(const GetIceServerConfigRequestPrivate &other,
                                   GetIceServerConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIceServerConfigRequest)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
