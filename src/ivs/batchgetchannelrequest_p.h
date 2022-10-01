// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCHANNELREQUEST_P_H
#define QTAWS_BATCHGETCHANNELREQUEST_P_H

#include "ivsrequest_p.h"
#include "batchgetchannelrequest.h"

namespace QtAws {
namespace Ivs {

class BatchGetChannelRequest;

class BatchGetChannelRequestPrivate : public IvsRequestPrivate {

public:
    BatchGetChannelRequestPrivate(const IvsRequest::Action action,
                                   BatchGetChannelRequest * const q);
    BatchGetChannelRequestPrivate(const BatchGetChannelRequestPrivate &other,
                                   BatchGetChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetChannelRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
