// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELFTAGSREQUEST_P_H
#define QTAWS_GETRESOURCELFTAGSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "getresourcelftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetResourceLFTagsRequest;

class GetResourceLFTagsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetResourceLFTagsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetResourceLFTagsRequest * const q);
    GetResourceLFTagsRequestPrivate(const GetResourceLFTagsRequestPrivate &other,
                                   GetResourceLFTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
