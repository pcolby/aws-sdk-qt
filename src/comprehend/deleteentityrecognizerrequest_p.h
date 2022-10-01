// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYRECOGNIZERREQUEST_P_H
#define QTAWS_DELETEENTITYRECOGNIZERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "deleteentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteEntityRecognizerRequest;

class DeleteEntityRecognizerRequestPrivate : public ComprehendRequestPrivate {

public:
    DeleteEntityRecognizerRequestPrivate(const ComprehendRequest::Action action,
                                   DeleteEntityRecognizerRequest * const q);
    DeleteEntityRecognizerRequestPrivate(const DeleteEntityRecognizerRequestPrivate &other,
                                   DeleteEntityRecognizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
