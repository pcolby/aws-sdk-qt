// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGEPOLICYREQUEST_P_H
#define QTAWS_PUTIMAGEPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "putimagepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutImagePolicyRequest;

class PutImagePolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    PutImagePolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   PutImagePolicyRequest * const q);
    PutImagePolicyRequestPrivate(const PutImagePolicyRequestPrivate &other,
                                   PutImagePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutImagePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
