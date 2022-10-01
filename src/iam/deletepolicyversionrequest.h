// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYVERSIONREQUEST_H
#define QTAWS_DELETEPOLICYVERSIONREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeletePolicyVersionRequestPrivate;

class QTAWSIAM_EXPORT DeletePolicyVersionRequest : public IamRequest {

public:
    DeletePolicyVersionRequest(const DeletePolicyVersionRequest &other);
    DeletePolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePolicyVersionRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
