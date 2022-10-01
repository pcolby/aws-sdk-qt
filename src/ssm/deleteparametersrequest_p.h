// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERSREQUEST_P_H
#define QTAWS_DELETEPARAMETERSREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteparametersrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteParametersRequest;

class DeleteParametersRequestPrivate : public SsmRequestPrivate {

public:
    DeleteParametersRequestPrivate(const SsmRequest::Action action,
                                   DeleteParametersRequest * const q);
    DeleteParametersRequestPrivate(const DeleteParametersRequestPrivate &other,
                                   DeleteParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteParametersRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
