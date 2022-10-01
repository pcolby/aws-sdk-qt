// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCODEREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONCODEREQUEST_P_H

#include "lambdarequest_p.h"
#include "updatefunctioncoderequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionCodeRequest;

class UpdateFunctionCodeRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateFunctionCodeRequestPrivate(const LambdaRequest::Action action,
                                   UpdateFunctionCodeRequest * const q);
    UpdateFunctionCodeRequestPrivate(const UpdateFunctionCodeRequestPrivate &other,
                                   UpdateFunctionCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionCodeRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
