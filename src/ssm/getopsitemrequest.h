// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSITEMREQUEST_H
#define QTAWS_GETOPSITEMREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsItemRequestPrivate;

class QTAWSSSM_EXPORT GetOpsItemRequest : public SsmRequest {

public:
    GetOpsItemRequest(const GetOpsItemRequest &other);
    GetOpsItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpsItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
