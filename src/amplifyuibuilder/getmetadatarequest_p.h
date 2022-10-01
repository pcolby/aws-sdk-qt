// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETADATAREQUEST_P_H
#define QTAWS_GETMETADATAREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "getmetadatarequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetMetadataRequest;

class GetMetadataRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    GetMetadataRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   GetMetadataRequest * const q);
    GetMetadataRequestPrivate(const GetMetadataRequestPrivate &other,
                                   GetMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMetadataRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
