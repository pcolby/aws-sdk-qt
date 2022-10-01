// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEGROUPREQUEST_P_H
#define QTAWS_CREATENODEGROUPREQUEST_P_H

#include "eksrequest_p.h"
#include "createnodegrouprequest.h"

namespace QtAws {
namespace Eks {

class CreateNodegroupRequest;

class CreateNodegroupRequestPrivate : public EksRequestPrivate {

public:
    CreateNodegroupRequestPrivate(const EksRequest::Action action,
                                   CreateNodegroupRequest * const q);
    CreateNodegroupRequestPrivate(const CreateNodegroupRequestPrivate &other,
                                   CreateNodegroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNodegroupRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
