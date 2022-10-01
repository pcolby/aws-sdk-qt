// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteSpotDatafeedSubscriptionRequestPrivate;

class QTAWSEC2_EXPORT DeleteSpotDatafeedSubscriptionRequest : public Ec2Request {

public:
    DeleteSpotDatafeedSubscriptionRequest(const DeleteSpotDatafeedSubscriptionRequest &other);
    DeleteSpotDatafeedSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSpotDatafeedSubscriptionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
