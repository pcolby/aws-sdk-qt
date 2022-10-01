// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIMODELSREQUEST_P_H
#define QTAWS_GETBACKENDAPIMODELSREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "getbackendapimodelsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIModelsRequest;

class GetBackendAPIModelsRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetBackendAPIModelsRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetBackendAPIModelsRequest * const q);
    GetBackendAPIModelsRequestPrivate(const GetBackendAPIModelsRequestPrivate &other,
                                   GetBackendAPIModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendAPIModelsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
