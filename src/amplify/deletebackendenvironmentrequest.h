// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDENVIRONMENTREQUEST_H
#define QTAWS_DELETEBACKENDENVIRONMENTREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteBackendEnvironmentRequestPrivate;

class QTAWSAMPLIFY_EXPORT DeleteBackendEnvironmentRequest : public AmplifyRequest {

public:
    DeleteBackendEnvironmentRequest(const DeleteBackendEnvironmentRequest &other);
    DeleteBackendEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendEnvironmentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
