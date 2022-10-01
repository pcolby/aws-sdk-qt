// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHVERSIONREQUEST_P_H
#define QTAWS_PUBLISHVERSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "publishversionrequest.h"

namespace QtAws {
namespace Lambda {

class PublishVersionRequest;

class PublishVersionRequestPrivate : public LambdaRequestPrivate {

public:
    PublishVersionRequestPrivate(const LambdaRequest::Action action,
                                   PublishVersionRequest * const q);
    PublishVersionRequestPrivate(const PublishVersionRequestPrivate &other,
                                   PublishVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
