// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCECONFIGREQUEST_P_H
#define QTAWS_PUTRESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "putresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class PutResourceConfigRequest;

class PutResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutResourceConfigRequest * const q);
    PutResourceConfigRequestPrivate(const PutResourceConfigRequestPrivate &other,
                                   PutResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
