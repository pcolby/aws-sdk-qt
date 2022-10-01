// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYPOLICYREQUEST_H
#define QTAWS_DELETEREGISTRYPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRegistryPolicyRequestPrivate;

class QTAWSECR_EXPORT DeleteRegistryPolicyRequest : public EcrRequest {

public:
    DeleteRegistryPolicyRequest(const DeleteRegistryPolicyRequest &other);
    DeleteRegistryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegistryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
