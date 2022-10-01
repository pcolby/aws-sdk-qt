// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELFTAGREQUEST_P_H
#define QTAWS_DELETELFTAGREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "deletelftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteLFTagRequest;

class DeleteLFTagRequestPrivate : public LakeFormationRequestPrivate {

public:
    DeleteLFTagRequestPrivate(const LakeFormationRequest::Action action,
                                   DeleteLFTagRequest * const q);
    DeleteLFTagRequestPrivate(const DeleteLFTagRequestPrivate &other,
                                   DeleteLFTagRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
