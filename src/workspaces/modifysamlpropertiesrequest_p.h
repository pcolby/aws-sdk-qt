// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSAMLPROPERTIESREQUEST_P_H
#define QTAWS_MODIFYSAMLPROPERTIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifysamlpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySamlPropertiesRequest;

class ModifySamlPropertiesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifySamlPropertiesRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifySamlPropertiesRequest * const q);
    ModifySamlPropertiesRequestPrivate(const ModifySamlPropertiesRequestPrivate &other,
                                   ModifySamlPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySamlPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
