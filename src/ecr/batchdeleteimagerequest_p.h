// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMAGEREQUEST_P_H
#define QTAWS_BATCHDELETEIMAGEREQUEST_P_H

#include "ecrrequest_p.h"
#include "batchdeleteimagerequest.h"

namespace QtAws {
namespace Ecr {

class BatchDeleteImageRequest;

class BatchDeleteImageRequestPrivate : public EcrRequestPrivate {

public:
    BatchDeleteImageRequestPrivate(const EcrRequest::Action action,
                                   BatchDeleteImageRequest * const q);
    BatchDeleteImageRequestPrivate(const BatchDeleteImageRequestPrivate &other,
                                   BatchDeleteImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteImageRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
