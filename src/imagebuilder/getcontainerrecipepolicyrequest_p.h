// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPEPOLICYREQUEST_P_H
#define QTAWS_GETCONTAINERRECIPEPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getcontainerrecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipePolicyRequest;

class GetContainerRecipePolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetContainerRecipePolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetContainerRecipePolicyRequest * const q);
    GetContainerRecipePolicyRequestPrivate(const GetContainerRecipePolicyRequestPrivate &other,
                                   GetContainerRecipePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
