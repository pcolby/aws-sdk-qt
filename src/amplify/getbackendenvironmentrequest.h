// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDENVIRONMENTREQUEST_H
#define QTAWS_GETBACKENDENVIRONMENTREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class GetBackendEnvironmentRequestPrivate;

class QTAWSAMPLIFY_EXPORT GetBackendEnvironmentRequest : public AmplifyRequest {

public:
    GetBackendEnvironmentRequest(const GetBackendEnvironmentRequest &other);
    GetBackendEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendEnvironmentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
