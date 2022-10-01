// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERREQUEST_P_H
#define QTAWS_DELETEPARAMETERREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteparameterrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteParameterRequest;

class DeleteParameterRequestPrivate : public SsmRequestPrivate {

public:
    DeleteParameterRequestPrivate(const SsmRequest::Action action,
                                   DeleteParameterRequest * const q);
    DeleteParameterRequestPrivate(const DeleteParameterRequestPrivate &other,
                                   DeleteParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteParameterRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
