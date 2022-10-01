// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONMETADATAREQUEST_P_H
#define QTAWS_GETUNFILTEREDPARTITIONMETADATAREQUEST_P_H

#include "gluerequest_p.h"
#include "getunfilteredpartitionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionMetadataRequest;

class GetUnfilteredPartitionMetadataRequestPrivate : public GlueRequestPrivate {

public:
    GetUnfilteredPartitionMetadataRequestPrivate(const GlueRequest::Action action,
                                   GetUnfilteredPartitionMetadataRequest * const q);
    GetUnfilteredPartitionMetadataRequestPrivate(const GetUnfilteredPartitionMetadataRequestPrivate &other,
                                   GetUnfilteredPartitionMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUnfilteredPartitionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
