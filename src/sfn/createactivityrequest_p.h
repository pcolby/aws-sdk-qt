// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVITYREQUEST_P_H
#define QTAWS_CREATEACTIVITYREQUEST_P_H

#include "sfnrequest_p.h"
#include "createactivityrequest.h"

namespace QtAws {
namespace Sfn {

class CreateActivityRequest;

class CreateActivityRequestPrivate : public SfnRequestPrivate {

public:
    CreateActivityRequestPrivate(const SfnRequest::Action action,
                                   CreateActivityRequest * const q);
    CreateActivityRequestPrivate(const CreateActivityRequestPrivate &other,
                                   CreateActivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateActivityRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
