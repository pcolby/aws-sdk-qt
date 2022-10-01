// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDAUTHREQUEST_H
#define QTAWS_IMPORTBACKENDAUTHREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendAuthRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ImportBackendAuthRequest : public AmplifyBackendRequest {

public:
    ImportBackendAuthRequest(const ImportBackendAuthRequest &other);
    ImportBackendAuthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
