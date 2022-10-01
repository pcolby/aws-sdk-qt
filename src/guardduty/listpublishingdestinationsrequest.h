// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHINGDESTINATIONSREQUEST_H
#define QTAWS_LISTPUBLISHINGDESTINATIONSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListPublishingDestinationsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT ListPublishingDestinationsRequest : public GuardDutyRequest {

public:
    ListPublishingDestinationsRequest(const ListPublishingDestinationsRequest &other);
    ListPublishingDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPublishingDestinationsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
