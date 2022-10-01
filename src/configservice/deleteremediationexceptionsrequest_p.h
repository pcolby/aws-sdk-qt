// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONEXCEPTIONSREQUEST_P_H
#define QTAWS_DELETEREMEDIATIONEXCEPTIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteremediationexceptionsrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationExceptionsRequest;

class DeleteRemediationExceptionsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteRemediationExceptionsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteRemediationExceptionsRequest * const q);
    DeleteRemediationExceptionsRequestPrivate(const DeleteRemediationExceptionsRequestPrivate &other,
                                   DeleteRemediationExceptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRemediationExceptionsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
