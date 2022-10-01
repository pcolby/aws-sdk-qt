// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATELOGSUBSCRIPTIONREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateLogSubscriptionRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateLogSubscriptionRequest : public DirectoryServiceRequest {

public:
    CreateLogSubscriptionRequest(const CreateLogSubscriptionRequest &other);
    CreateLogSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogSubscriptionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
