// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRESOURCEREQUEST_P_H
#define QTAWS_REGISTERRESOURCEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "registerresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class RegisterResourceRequest;

class RegisterResourceRequestPrivate : public LakeFormationRequestPrivate {

public:
    RegisterResourceRequestPrivate(const LakeFormationRequest::Action action,
                                   RegisterResourceRequest * const q);
    RegisterResourceRequestPrivate(const RegisterResourceRequestPrivate &other,
                                   RegisterResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
