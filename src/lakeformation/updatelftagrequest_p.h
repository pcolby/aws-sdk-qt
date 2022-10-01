// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELFTAGREQUEST_P_H
#define QTAWS_UPDATELFTAGREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "updatelftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateLFTagRequest;

class UpdateLFTagRequestPrivate : public LakeFormationRequestPrivate {

public:
    UpdateLFTagRequestPrivate(const LakeFormationRequest::Action action,
                                   UpdateLFTagRequest * const q);
    UpdateLFTagRequestPrivate(const UpdateLFTagRequestPrivate &other,
                                   UpdateLFTagRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
