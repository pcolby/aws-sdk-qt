// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGROLEREQUEST_H
#define QTAWS_TAGROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagRoleRequestPrivate;

class QTAWSIAM_EXPORT TagRoleRequest : public IamRequest {

public:
    TagRoleRequest(const TagRoleRequest &other);
    TagRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
