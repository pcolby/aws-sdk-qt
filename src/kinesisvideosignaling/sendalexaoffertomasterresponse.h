// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDALEXAOFFERTOMASTERRESPONSE_H
#define QTAWS_SENDALEXAOFFERTOMASTERRESPONSE_H

#include "kinesisvideosignalingresponse.h"
#include "sendalexaoffertomasterrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class SendAlexaOfferToMasterResponsePrivate;

class QTAWSKINESISVIDEOSIGNALING_EXPORT SendAlexaOfferToMasterResponse : public KinesisVideoSignalingResponse {
    Q_OBJECT

public:
    SendAlexaOfferToMasterResponse(const SendAlexaOfferToMasterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendAlexaOfferToMasterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendAlexaOfferToMasterResponse)
    Q_DISABLE_COPY(SendAlexaOfferToMasterResponse)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
