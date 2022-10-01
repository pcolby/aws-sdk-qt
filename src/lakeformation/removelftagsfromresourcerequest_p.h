// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELFTAGSFROMRESOURCEREQUEST_P_H
#define QTAWS_REMOVELFTAGSFROMRESOURCEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "removelftagsfromresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class RemoveLFTagsFromResourceRequest;

class RemoveLFTagsFromResourceRequestPrivate : public LakeFormationRequestPrivate {

public:
    RemoveLFTagsFromResourceRequestPrivate(const LakeFormationRequest::Action action,
                                   RemoveLFTagsFromResourceRequest * const q);
    RemoveLFTagsFromResourceRequestPrivate(const RemoveLFTagsFromResourceRequestPrivate &other,
                                   RemoveLFTagsFromResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveLFTagsFromResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
