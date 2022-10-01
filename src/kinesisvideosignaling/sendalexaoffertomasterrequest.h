// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDALEXAOFFERTOMASTERREQUEST_H
#define QTAWS_SENDALEXAOFFERTOMASTERREQUEST_H

#include "kinesisvideosignalingrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class SendAlexaOfferToMasterRequestPrivate;

class QTAWSKINESISVIDEOSIGNALING_EXPORT SendAlexaOfferToMasterRequest : public KinesisVideoSignalingRequest {

public:
    SendAlexaOfferToMasterRequest(const SendAlexaOfferToMasterRequest &other);
    SendAlexaOfferToMasterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendAlexaOfferToMasterRequest)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
