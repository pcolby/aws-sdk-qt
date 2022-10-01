// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteEventSubscriptionRequestPrivate;

class QTAWSNEPTUNE_EXPORT DeleteEventSubscriptionRequest : public NeptuneRequest {

public:
    DeleteEventSubscriptionRequest(const DeleteEventSubscriptionRequest &other);
    DeleteEventSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventSubscriptionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
