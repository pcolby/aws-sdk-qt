// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERRECIPEPOLICYREQUEST_P_H
#define QTAWS_PUTCONTAINERRECIPEPOLICYREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "putcontainerrecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutContainerRecipePolicyRequest;

class PutContainerRecipePolicyRequestPrivate : public ImageBuilderRequestPrivate {

public:
    PutContainerRecipePolicyRequestPrivate(const ImageBuilderRequest::Action action,
                                   PutContainerRecipePolicyRequest * const q);
    PutContainerRecipePolicyRequestPrivate(const PutContainerRecipePolicyRequestPrivate &other,
                                   PutContainerRecipePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutContainerRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
