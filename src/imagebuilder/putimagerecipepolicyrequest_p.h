// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERECIPEPOLICYREQUEST_P_H
#define QTAWS_PUTIMAGERECIPEPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "putimagerecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutImageRecipePolicyRequest;

class PutImageRecipePolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    PutImageRecipePolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   PutImageRecipePolicyRequest * const q);
    PutImageRecipePolicyRequestPrivate(const PutImageRecipePolicyRequestPrivate &other,
                                   PutImageRecipePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutImageRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
