// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_H
#define QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyEventSubscriptionRequestPrivate;

class QTAWSNEPTUNE_EXPORT ModifyEventSubscriptionRequest : public NeptuneRequest {

public:
    ModifyEventSubscriptionRequest(const ModifyEventSubscriptionRequest &other);
    ModifyEventSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEventSubscriptionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
