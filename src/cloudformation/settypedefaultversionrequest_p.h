// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPEDEFAULTVERSIONREQUEST_P_H
#define QTAWS_SETTYPEDEFAULTVERSIONREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "settypedefaultversionrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeDefaultVersionRequest;

class SetTypeDefaultVersionRequestPrivate : public CloudFormationRequestPrivate {

public:
    SetTypeDefaultVersionRequestPrivate(const CloudFormationRequest::Action action,
                                   SetTypeDefaultVersionRequest * const q);
    SetTypeDefaultVersionRequestPrivate(const SetTypeDefaultVersionRequestPrivate &other,
                                   SetTypeDefaultVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTypeDefaultVersionRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
