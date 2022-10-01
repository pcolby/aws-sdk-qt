// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELREQUEST_P_H
#define QTAWS_CREATEMODELREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "createmodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class CreateModelRequest;

class CreateModelRequestPrivate : public LookoutVisionRequestPrivate {

public:
    CreateModelRequestPrivate(const LookoutVisionRequest::Action action,
                                   CreateModelRequest * const q);
    CreateModelRequestPrivate(const CreateModelRequestPrivate &other,
                                   CreateModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
