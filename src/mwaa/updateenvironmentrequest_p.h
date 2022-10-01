// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTREQUEST_P_H
#define QTAWS_UPDATEENVIRONMENTREQUEST_P_H

#include "mwaarequest_p.h"
#include "updateenvironmentrequest.h"

namespace QtAws {
namespace Mwaa {

class UpdateEnvironmentRequest;

class UpdateEnvironmentRequestPrivate : public MwaaRequestPrivate {

public:
    UpdateEnvironmentRequestPrivate(const MwaaRequest::Action action,
                                   UpdateEnvironmentRequest * const q);
    UpdateEnvironmentRequestPrivate(const UpdateEnvironmentRequestPrivate &other,
                                   UpdateEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
