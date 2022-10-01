// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETREPOSITORYPOLICYREQUEST_H
#define QTAWS_SETREPOSITORYPOLICYREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class SetRepositoryPolicyRequestPrivate;

class QTAWSECRPUBLIC_EXPORT SetRepositoryPolicyRequest : public EcrPublicRequest {

public:
    SetRepositoryPolicyRequest(const SetRepositoryPolicyRequest &other);
    SetRepositoryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetRepositoryPolicyRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
