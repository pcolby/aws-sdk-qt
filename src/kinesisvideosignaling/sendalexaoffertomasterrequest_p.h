// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDALEXAOFFERTOMASTERREQUEST_P_H
#define QTAWS_SENDALEXAOFFERTOMASTERREQUEST_P_H

#include "kinesisvideosignalingrequest_p.h"
#include "sendalexaoffertomasterrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class SendAlexaOfferToMasterRequest;

class SendAlexaOfferToMasterRequestPrivate : public KinesisVideoSignalingRequestPrivate {

public:
    SendAlexaOfferToMasterRequestPrivate(const KinesisVideoSignalingRequest::Action action,
                                   SendAlexaOfferToMasterRequest * const q);
    SendAlexaOfferToMasterRequestPrivate(const SendAlexaOfferToMasterRequestPrivate &other,
                                   SendAlexaOfferToMasterRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendAlexaOfferToMasterRequest)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
