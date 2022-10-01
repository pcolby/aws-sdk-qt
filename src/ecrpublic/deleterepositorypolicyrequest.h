// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPOLICYREQUEST_H
#define QTAWS_DELETEREPOSITORYPOLICYREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class DeleteRepositoryPolicyRequestPrivate;

class QTAWSECRPUBLIC_EXPORT DeleteRepositoryPolicyRequest : public EcrPublicRequest {

public:
    DeleteRepositoryPolicyRequest(const DeleteRepositoryPolicyRequest &other);
    DeleteRepositoryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryPolicyRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
