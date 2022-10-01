// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATAREQUEST_P_H
#define QTAWS_PUTMETADATAREQUEST_P_H

#include "ivsrequest_p.h"
#include "putmetadatarequest.h"

namespace QtAws {
namespace Ivs {

class PutMetadataRequest;

class PutMetadataRequestPrivate : public IvsRequestPrivate {

public:
    PutMetadataRequestPrivate(const IvsRequest::Action action,
                                   PutMetadataRequest * const q);
    PutMetadataRequestPrivate(const PutMetadataRequestPrivate &other,
                                   PutMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetadataRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
