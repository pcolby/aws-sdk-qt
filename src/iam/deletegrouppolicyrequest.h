// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPPOLICYREQUEST_H
#define QTAWS_DELETEGROUPPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteGroupPolicyRequestPrivate;

class QTAWSIAM_EXPORT DeleteGroupPolicyRequest : public IamRequest {

public:
    DeleteGroupPolicyRequest(const DeleteGroupPolicyRequest &other);
    DeleteGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
