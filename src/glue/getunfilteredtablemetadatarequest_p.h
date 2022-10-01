// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDTABLEMETADATAREQUEST_P_H
#define QTAWS_GETUNFILTEREDTABLEMETADATAREQUEST_P_H

#include "gluerequest_p.h"
#include "getunfilteredtablemetadatarequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredTableMetadataRequest;

class GetUnfilteredTableMetadataRequestPrivate : public GlueRequestPrivate {

public:
    GetUnfilteredTableMetadataRequestPrivate(const GlueRequest::Action action,
                                   GetUnfilteredTableMetadataRequest * const q);
    GetUnfilteredTableMetadataRequestPrivate(const GetUnfilteredTableMetadataRequestPrivate &other,
                                   GetUnfilteredTableMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUnfilteredTableMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
