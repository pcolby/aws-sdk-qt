// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONREQUEST_H
#define QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class AddSourceIdentifierToSubscriptionRequestPrivate;

class QTAWSRDS_EXPORT AddSourceIdentifierToSubscriptionRequest : public RdsRequest {

public:
    AddSourceIdentifierToSubscriptionRequest(const AddSourceIdentifierToSubscriptionRequest &other);
    AddSourceIdentifierToSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddSourceIdentifierToSubscriptionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
