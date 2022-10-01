// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTRESOURCECONFIGREQUEST_P_H
#define QTAWS_SELECTRESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "selectresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class SelectResourceConfigRequest;

class SelectResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    SelectResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   SelectResourceConfigRequest * const q);
    SelectResourceConfigRequestPrivate(const SelectResourceConfigRequestPrivate &other,
                                   SelectResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(SelectResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
