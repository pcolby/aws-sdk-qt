// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATEACCOUNTSUBSCRIPTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountSubscriptionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateAccountSubscriptionRequest : public QuickSightRequest {

public:
    CreateAccountSubscriptionRequest(const CreateAccountSubscriptionRequest &other);
    CreateAccountSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountSubscriptionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
