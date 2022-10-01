// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGERDEFINITIONREQUEST_P_H
#define QTAWS_UPDATELOGGERDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updateloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateLoggerDefinitionRequest;

class UpdateLoggerDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateLoggerDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateLoggerDefinitionRequest * const q);
    UpdateLoggerDefinitionRequestPrivate(const UpdateLoggerDefinitionRequestPrivate &other,
                                   UpdateLoggerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
