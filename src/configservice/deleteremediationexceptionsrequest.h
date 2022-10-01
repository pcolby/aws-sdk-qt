// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONEXCEPTIONSREQUEST_H
#define QTAWS_DELETEREMEDIATIONEXCEPTIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationExceptionsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteRemediationExceptionsRequest : public ConfigServiceRequest {

public:
    DeleteRemediationExceptionsRequest(const DeleteRemediationExceptionsRequest &other);
    DeleteRemediationExceptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRemediationExceptionsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
