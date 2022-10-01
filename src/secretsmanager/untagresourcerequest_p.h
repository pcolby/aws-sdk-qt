// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace SecretsManager {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public SecretsManagerRequestPrivate {

public:
    UntagResourceRequestPrivate(const SecretsManagerRequest::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
