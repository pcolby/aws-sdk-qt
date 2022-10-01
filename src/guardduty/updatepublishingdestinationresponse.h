// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLISHINGDESTINATIONRESPONSE_H
#define QTAWS_UPDATEPUBLISHINGDESTINATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "updatepublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdatePublishingDestinationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT UpdatePublishingDestinationResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    UpdatePublishingDestinationResponse(const UpdatePublishingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePublishingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePublishingDestinationResponse)
    Q_DISABLE_COPY(UpdatePublishingDestinationResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
