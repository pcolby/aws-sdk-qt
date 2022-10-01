// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDSTORAGEREQUEST_P_H
#define QTAWS_IMPORTBACKENDSTORAGEREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "importbackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendStorageRequest;

class ImportBackendStorageRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    ImportBackendStorageRequestPrivate(const AmplifyBackendRequest::Action action,
                                   ImportBackendStorageRequest * const q);
    ImportBackendStorageRequestPrivate(const ImportBackendStorageRequestPrivate &other,
                                   ImportBackendStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
