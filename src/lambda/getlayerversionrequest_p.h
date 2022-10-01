// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONREQUEST_P_H
#define QTAWS_GETLAYERVERSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "getlayerversionrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionRequest;

class GetLayerVersionRequestPrivate : public LambdaRequestPrivate {

public:
    GetLayerVersionRequestPrivate(const LambdaRequest::Action action,
                                   GetLayerVersionRequest * const q);
    GetLayerVersionRequestPrivate(const GetLayerVersionRequestPrivate &other,
                                   GetLayerVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
