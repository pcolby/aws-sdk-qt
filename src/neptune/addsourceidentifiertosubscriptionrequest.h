// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONREQUEST_H
#define QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class AddSourceIdentifierToSubscriptionRequestPrivate;

class QTAWSNEPTUNE_EXPORT AddSourceIdentifierToSubscriptionRequest : public NeptuneRequest {

public:
    AddSourceIdentifierToSubscriptionRequest(const AddSourceIdentifierToSubscriptionRequest &other);
    AddSourceIdentifierToSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddSourceIdentifierToSubscriptionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
