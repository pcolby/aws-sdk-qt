// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTPROPERTIESREQUEST_P_H
#define QTAWS_MODIFYCLIENTPROPERTIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyclientpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyClientPropertiesRequest;

class ModifyClientPropertiesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifyClientPropertiesRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifyClientPropertiesRequest * const q);
    ModifyClientPropertiesRequestPrivate(const ModifyClientPropertiesRequestPrivate &other,
                                   ModifyClientPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClientPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
