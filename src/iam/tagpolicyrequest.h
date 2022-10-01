// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPOLICYREQUEST_H
#define QTAWS_TAGPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagPolicyRequestPrivate;

class QTAWSIAM_EXPORT TagPolicyRequest : public IamRequest {

public:
    TagPolicyRequest(const TagPolicyRequest &other);
    TagPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
