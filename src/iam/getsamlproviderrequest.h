// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMLPROVIDERREQUEST_H
#define QTAWS_GETSAMLPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetSAMLProviderRequestPrivate;

class QTAWSIAM_EXPORT GetSAMLProviderRequest : public IamRequest {

public:
    GetSAMLProviderRequest(const GetSAMLProviderRequest &other);
    GetSAMLProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
