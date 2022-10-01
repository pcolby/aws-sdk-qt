// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTVERSIONREQUEST_P_H
#define QTAWS_CREATECOMPONENTVERSIONREQUEST_P_H

#include "greengrassv2request_p.h"
#include "createcomponentversionrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class CreateComponentVersionRequest;

class CreateComponentVersionRequestPrivate : public GreengrassV2RequestPrivate {

public:
    CreateComponentVersionRequestPrivate(const GreengrassV2Request::Action action,
                                   CreateComponentVersionRequest * const q);
    CreateComponentVersionRequestPrivate(const CreateComponentVersionRequestPrivate &other,
                                   CreateComponentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateComponentVersionRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
