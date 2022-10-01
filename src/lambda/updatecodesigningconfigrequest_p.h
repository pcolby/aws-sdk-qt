// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODESIGNINGCONFIGREQUEST_P_H
#define QTAWS_UPDATECODESIGNINGCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "updatecodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateCodeSigningConfigRequest;

class UpdateCodeSigningConfigRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateCodeSigningConfigRequestPrivate(const LambdaRequest::Action action,
                                   UpdateCodeSigningConfigRequest * const q);
    UpdateCodeSigningConfigRequestPrivate(const UpdateCodeSigningConfigRequestPrivate &other,
                                   UpdateCodeSigningConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
