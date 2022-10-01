// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECONFIGHISTORYREQUEST_P_H
#define QTAWS_GETRESOURCECONFIGHISTORYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getresourceconfighistoryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetResourceConfigHistoryRequest;

class GetResourceConfigHistoryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetResourceConfigHistoryRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetResourceConfigHistoryRequest * const q);
    GetResourceConfigHistoryRequestPrivate(const GetResourceConfigHistoryRequestPrivate &other,
                                   GetResourceConfigHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceConfigHistoryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
