// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELFTAGREQUEST_P_H
#define QTAWS_CREATELFTAGREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "createlftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class CreateLFTagRequest;

class CreateLFTagRequestPrivate : public LakeFormationRequestPrivate {

public:
    CreateLFTagRequestPrivate(const LakeFormationRequest::Action action,
                                   CreateLFTagRequest * const q);
    CreateLFTagRequestPrivate(const CreateLFTagRequestPrivate &other,
                                   CreateLFTagRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
