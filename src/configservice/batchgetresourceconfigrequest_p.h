// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRESOURCECONFIGREQUEST_P_H
#define QTAWS_BATCHGETRESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "batchgetresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class BatchGetResourceConfigRequest;

class BatchGetResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    BatchGetResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   BatchGetResourceConfigRequest * const q);
    BatchGetResourceConfigRequestPrivate(const BatchGetResourceConfigRequestPrivate &other,
                                   BatchGetResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
