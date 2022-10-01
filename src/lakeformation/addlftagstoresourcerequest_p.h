// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLFTAGSTORESOURCEREQUEST_P_H
#define QTAWS_ADDLFTAGSTORESOURCEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "addlftagstoresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class AddLFTagsToResourceRequest;

class AddLFTagsToResourceRequestPrivate : public LakeFormationRequestPrivate {

public:
    AddLFTagsToResourceRequestPrivate(const LakeFormationRequest::Action action,
                                   AddLFTagsToResourceRequest * const q);
    AddLFTagsToResourceRequestPrivate(const AddLFTagsToResourceRequestPrivate &other,
                                   AddLFTagsToResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddLFTagsToResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
