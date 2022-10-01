// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLISHINGDESTINATIONREQUEST_H
#define QTAWS_CREATEPUBLISHINGDESTINATIONREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreatePublishingDestinationRequestPrivate;

class QTAWSGUARDDUTY_EXPORT CreatePublishingDestinationRequest : public GuardDutyRequest {

public:
    CreatePublishingDestinationRequest(const CreatePublishingDestinationRequest &other);
    CreatePublishingDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublishingDestinationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
