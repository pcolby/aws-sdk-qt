// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDALEXAOFFERTOMASTERRESPONSE_P_H
#define QTAWS_SENDALEXAOFFERTOMASTERRESPONSE_P_H

#include "kinesisvideosignalingresponse_p.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class SendAlexaOfferToMasterResponse;

class SendAlexaOfferToMasterResponsePrivate : public KinesisVideoSignalingResponsePrivate {

public:

    explicit SendAlexaOfferToMasterResponsePrivate(SendAlexaOfferToMasterResponse * const q);

    void parseSendAlexaOfferToMasterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendAlexaOfferToMasterResponse)
    Q_DISABLE_COPY(SendAlexaOfferToMasterResponsePrivate)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
