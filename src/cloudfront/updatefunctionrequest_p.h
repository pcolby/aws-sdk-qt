// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatefunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFunctionRequest;

class UpdateFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateFunctionRequest * const q);
    UpdateFunctionRequestPrivate(const UpdateFunctionRequestPrivate &other,
                                   UpdateFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
