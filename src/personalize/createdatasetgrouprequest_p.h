// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETGROUPREQUEST_P_H
#define QTAWS_CREATEDATASETGROUPREQUEST_P_H

#include "personalizerequest_p.h"
#include "createdatasetgrouprequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetGroupRequest;

class CreateDatasetGroupRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateDatasetGroupRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateDatasetGroupRequest * const q);
    CreateDatasetGroupRequestPrivate(const CreateDatasetGroupRequestPrivate &other,
                                   CreateDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetGroupRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
