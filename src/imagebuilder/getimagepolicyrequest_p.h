// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPOLICYREQUEST_P_H
#define QTAWS_GETIMAGEPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getimagepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePolicyRequest;

class GetImagePolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetImagePolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetImagePolicyRequest * const q);
    GetImagePolicyRequestPrivate(const GetImagePolicyRequestPrivate &other,
                                   GetImagePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImagePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
