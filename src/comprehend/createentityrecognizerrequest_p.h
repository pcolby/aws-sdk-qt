// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYRECOGNIZERREQUEST_P_H
#define QTAWS_CREATEENTITYRECOGNIZERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "createentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class CreateEntityRecognizerRequest;

class CreateEntityRecognizerRequestPrivate : public ComprehendRequestPrivate {

public:
    CreateEntityRecognizerRequestPrivate(const ComprehendRequest::Action action,
                                   CreateEntityRecognizerRequest * const q);
    CreateEntityRecognizerRequestPrivate(const CreateEntityRecognizerRequestPrivate &other,
                                   CreateEntityRecognizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
