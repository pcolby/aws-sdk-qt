// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTPOLICYREQUEST_P_H
#define QTAWS_GETCOMPONENTPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getcomponentpolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetComponentPolicyRequest;

class GetComponentPolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetComponentPolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetComponentPolicyRequest * const q);
    GetComponentPolicyRequestPrivate(const GetComponentPolicyRequestPrivate &other,
                                   GetComponentPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComponentPolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
