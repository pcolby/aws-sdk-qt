// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPONENTPOLICYREQUEST_P_H
#define QTAWS_PUTCOMPONENTPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "putcomponentpolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutComponentPolicyRequest;

class PutComponentPolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    PutComponentPolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   PutComponentPolicyRequest * const q);
    PutComponentPolicyRequestPrivate(const PutComponentPolicyRequestPrivate &other,
                                   PutComponentPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutComponentPolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
