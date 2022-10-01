// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_DELETECODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletecodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteCodeSigningConfigRequest;

class DeleteCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   DeleteCodeSigningConfigRequest * const q);
    DeleteCodeSigningConfigRequestPrivate(const DeleteCodeSigningConfigRequestPrivate &other,
                                   DeleteCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
