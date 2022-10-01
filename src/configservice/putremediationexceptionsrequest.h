// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONEXCEPTIONSREQUEST_H
#define QTAWS_PUTREMEDIATIONEXCEPTIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationExceptionsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRemediationExceptionsRequest : public ConfigServiceRequest {

public:
    PutRemediationExceptionsRequest(const PutRemediationExceptionsRequest &other);
    PutRemediationExceptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRemediationExceptionsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
