// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSITEMREQUEST_H
#define QTAWS_UPDATEOPSITEMREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsItemRequestPrivate;

class QTAWSSSM_EXPORT UpdateOpsItemRequest : public SsmRequest {

public:
    UpdateOpsItemRequest(const UpdateOpsItemRequest &other);
    UpdateOpsItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOpsItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
