// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSITEMREQUEST_H
#define QTAWS_CREATEOPSITEMREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateOpsItemRequestPrivate;

class QTAWSSSM_EXPORT CreateOpsItemRequest : public SsmRequest {

public:
    CreateOpsItemRequest(const CreateOpsItemRequest &other);
    CreateOpsItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOpsItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
