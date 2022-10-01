// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSAMLPROVIDERREQUEST_H
#define QTAWS_TAGSAMLPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagSAMLProviderRequestPrivate;

class QTAWSIAM_EXPORT TagSAMLProviderRequest : public IamRequest {

public:
    TagSAMLProviderRequest(const TagSAMLProviderRequest &other);
    TagSAMLProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
