// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONBYARNREQUEST_P_H
#define QTAWS_GETLAYERVERSIONBYARNREQUEST_P_H

#include "lambdarequest_p.h"
#include "getlayerversionbyarnrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionByArnRequest;

class GetLayerVersionByArnRequestPrivate : public LambdaRequestPrivate {

public:
    GetLayerVersionByArnRequestPrivate(const LambdaRequest::Action action,
                                   GetLayerVersionByArnRequest * const q);
    GetLayerVersionByArnRequestPrivate(const GetLayerVersionByArnRequestPrivate &other,
                                   GetLayerVersionByArnRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionByArnRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
