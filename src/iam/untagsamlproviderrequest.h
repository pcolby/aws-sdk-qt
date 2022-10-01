// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSAMLPROVIDERREQUEST_H
#define QTAWS_UNTAGSAMLPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UntagSAMLProviderRequestPrivate;

class QTAWSIAM_EXPORT UntagSAMLProviderRequest : public IamRequest {

public:
    UntagSAMLProviderRequest(const UntagSAMLProviderRequest &other);
    UntagSAMLProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
