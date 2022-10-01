// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPOLICYREQUEST_H
#define QTAWS_DELETEREPOSITORYPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRepositoryPolicyRequestPrivate;

class QTAWSECR_EXPORT DeleteRepositoryPolicyRequest : public EcrRequest {

public:
    DeleteRepositoryPolicyRequest(const DeleteRepositoryPolicyRequest &other);
    DeleteRepositoryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
