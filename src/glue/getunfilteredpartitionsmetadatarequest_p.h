// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONSMETADATAREQUEST_P_H
#define QTAWS_GETUNFILTEREDPARTITIONSMETADATAREQUEST_P_H

#include "gluerequest_p.h"
#include "getunfilteredpartitionsmetadatarequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionsMetadataRequest;

class GetUnfilteredPartitionsMetadataRequestPrivate : public GlueRequestPrivate {

public:
    GetUnfilteredPartitionsMetadataRequestPrivate(const GlueRequest::Action action,
                                   GetUnfilteredPartitionsMetadataRequest * const q);
    GetUnfilteredPartitionsMetadataRequestPrivate(const GetUnfilteredPartitionsMetadataRequestPrivate &other,
                                   GetUnfilteredPartitionsMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUnfilteredPartitionsMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
