// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLISHINGDESTINATIONRESPONSE_H
#define QTAWS_DELETEPUBLISHINGDESTINATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "deletepublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeletePublishingDestinationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DeletePublishingDestinationResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DeletePublishingDestinationResponse(const DeletePublishingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePublishingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublishingDestinationResponse)
    Q_DISABLE_COPY(DeletePublishingDestinationResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
