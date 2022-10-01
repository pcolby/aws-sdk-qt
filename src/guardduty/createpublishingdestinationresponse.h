// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLISHINGDESTINATIONRESPONSE_H
#define QTAWS_CREATEPUBLISHINGDESTINATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "createpublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreatePublishingDestinationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT CreatePublishingDestinationResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreatePublishingDestinationResponse(const CreatePublishingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePublishingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublishingDestinationResponse)
    Q_DISABLE_COPY(CreatePublishingDestinationResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
