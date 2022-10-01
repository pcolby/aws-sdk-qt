// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETADATAREQUEST_P_H
#define QTAWS_GETRESOURCEMETADATAREQUEST_P_H

#include "pirequest_p.h"
#include "getresourcemetadatarequest.h"

namespace QtAws {
namespace Pi {

class GetResourceMetadataRequest;

class GetResourceMetadataRequestPrivate : public PiRequestPrivate {

public:
    GetResourceMetadataRequestPrivate(const PiRequest::Action action,
                                   GetResourceMetadataRequest * const q);
    GetResourceMetadataRequestPrivate(const GetResourceMetadataRequestPrivate &other,
                                   GetResourceMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceMetadataRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
