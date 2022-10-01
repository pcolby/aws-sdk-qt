// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEBACKENDAPIMODELSREQUEST_P_H
#define QTAWS_GENERATEBACKENDAPIMODELSREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "generatebackendapimodelsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GenerateBackendAPIModelsRequest;

class GenerateBackendAPIModelsRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GenerateBackendAPIModelsRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GenerateBackendAPIModelsRequest * const q);
    GenerateBackendAPIModelsRequestPrivate(const GenerateBackendAPIModelsRequestPrivate &other,
                                   GenerateBackendAPIModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateBackendAPIModelsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
