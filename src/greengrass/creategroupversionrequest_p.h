// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPVERSIONREQUEST_P_H
#define QTAWS_CREATEGROUPVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "creategroupversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupVersionRequest;

class CreateGroupVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateGroupVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateGroupVersionRequest * const q);
    CreateGroupVersionRequestPrivate(const CreateGroupVersionRequestPrivate &other,
                                   CreateGroupVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
