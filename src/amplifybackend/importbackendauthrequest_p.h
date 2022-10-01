// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDAUTHREQUEST_P_H
#define QTAWS_IMPORTBACKENDAUTHREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "importbackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendAuthRequest;

class ImportBackendAuthRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    ImportBackendAuthRequestPrivate(const AmplifyBackendRequest::Action action,
                                   ImportBackendAuthRequest * const q);
    ImportBackendAuthRequestPrivate(const ImportBackendAuthRequestPrivate &other,
                                   ImportBackendAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
