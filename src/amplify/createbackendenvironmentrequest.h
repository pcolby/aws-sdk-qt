// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDENVIRONMENTREQUEST_H
#define QTAWS_CREATEBACKENDENVIRONMENTREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class CreateBackendEnvironmentRequestPrivate;

class QTAWSAMPLIFY_EXPORT CreateBackendEnvironmentRequest : public AmplifyRequest {

public:
    CreateBackendEnvironmentRequest(const CreateBackendEnvironmentRequest &other);
    CreateBackendEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendEnvironmentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
