// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMLPROVIDERREQUEST_H
#define QTAWS_CREATESAMLPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateSAMLProviderRequestPrivate;

class QTAWSIAM_EXPORT CreateSAMLProviderRequest : public IamRequest {

public:
    CreateSAMLProviderRequest(const CreateSAMLProviderRequest &other);
    CreateSAMLProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
