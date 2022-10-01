// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_H
#define QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyEventSubscriptionRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyEventSubscriptionRequest : public RedshiftRequest {

public:
    ModifyEventSubscriptionRequest(const ModifyEventSubscriptionRequest &other);
    ModifyEventSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEventSubscriptionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
