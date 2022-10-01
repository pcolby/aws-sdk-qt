// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONREQUEST_P_H
#define QTAWS_CREATEFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFunctionRequest;

class CreateFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateFunctionRequest * const q);
    CreateFunctionRequestPrivate(const CreateFunctionRequestPrivate &other,
                                   CreateFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
