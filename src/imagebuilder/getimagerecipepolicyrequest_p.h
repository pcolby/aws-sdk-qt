// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPEPOLICYREQUEST_P_H
#define QTAWS_GETIMAGERECIPEPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getimagerecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipePolicyRequest;

class GetImageRecipePolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetImageRecipePolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetImageRecipePolicyRequest * const q);
    GetImageRecipePolicyRequestPrivate(const GetImageRecipePolicyRequestPrivate &other,
                                   GetImageRecipePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImageRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
