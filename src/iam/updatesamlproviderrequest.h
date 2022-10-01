// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMLPROVIDERREQUEST_H
#define QTAWS_UPDATESAMLPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSAMLProviderRequestPrivate;

class QTAWSIAM_EXPORT UpdateSAMLProviderRequest : public IamRequest {

public:
    UpdateSAMLProviderRequest(const UpdateSAMLProviderRequest &other);
    UpdateSAMLProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
