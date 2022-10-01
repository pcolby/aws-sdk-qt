// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTEC2REQUEST_P_H
#define QTAWS_CREATEENVIRONMENTEC2REQUEST_P_H

#include "cloud9request_p.h"
#include "createenvironmentec2request.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentEC2Request;

class CreateEnvironmentEC2RequestPrivate : public Cloud9RequestPrivate {

public:
    CreateEnvironmentEC2RequestPrivate(const Cloud9Request::Action action,
                                   CreateEnvironmentEC2Request * const q);
    CreateEnvironmentEC2RequestPrivate(const CreateEnvironmentEC2RequestPrivate &other,
                                   CreateEnvironmentEC2Request * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentEC2Request)

};

} // namespace Cloud9
} // namespace QtAws

#endif
