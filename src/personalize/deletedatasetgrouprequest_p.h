// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETGROUPREQUEST_P_H
#define QTAWS_DELETEDATASETGROUPREQUEST_P_H

#include "personalizerequest_p.h"
#include "deletedatasetgrouprequest.h"

namespace QtAws {
namespace Personalize {

class DeleteDatasetGroupRequest;

class DeleteDatasetGroupRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteDatasetGroupRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteDatasetGroupRequest * const q);
    DeleteDatasetGroupRequestPrivate(const DeleteDatasetGroupRequestPrivate &other,
                                   DeleteDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetGroupRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
