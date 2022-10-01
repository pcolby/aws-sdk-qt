// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHLAYERVERSIONREQUEST_P_H
#define QTAWS_PUBLISHLAYERVERSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "publishlayerversionrequest.h"

namespace QtAws {
namespace Lambda {

class PublishLayerVersionRequest;

class PublishLayerVersionRequestPrivate : public LambdaRequestPrivate {

public:
    PublishLayerVersionRequestPrivate(const LambdaRequest::Action action,
                                   PublishLayerVersionRequest * const q);
    PublishLayerVersionRequestPrivate(const PublishLayerVersionRequestPrivate &other,
                                   PublishLayerVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishLayerVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
