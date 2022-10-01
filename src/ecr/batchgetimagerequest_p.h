// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETIMAGEREQUEST_P_H
#define QTAWS_BATCHGETIMAGEREQUEST_P_H

#include "ecrrequest_p.h"
#include "batchgetimagerequest.h"

namespace QtAws {
namespace Ecr {

class BatchGetImageRequest;

class BatchGetImageRequestPrivate : public EcrRequestPrivate {

public:
    BatchGetImageRequestPrivate(const EcrRequest::Action action,
                                   BatchGetImageRequest * const q);
    BatchGetImageRequestPrivate(const BatchGetImageRequestPrivate &other,
                                   BatchGetImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetImageRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
