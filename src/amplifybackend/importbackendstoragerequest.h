// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDSTORAGEREQUEST_H
#define QTAWS_IMPORTBACKENDSTORAGEREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendStorageRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ImportBackendStorageRequest : public AmplifyBackendRequest {

public:
    ImportBackendStorageRequest(const ImportBackendStorageRequest &other);
    ImportBackendStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
