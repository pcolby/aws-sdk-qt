// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGERDEFINITIONREQUEST_P_H
#define QTAWS_DELETELOGGERDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deleteloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteLoggerDefinitionRequest;

class DeleteLoggerDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteLoggerDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteLoggerDefinitionRequest * const q);
    DeleteLoggerDefinitionRequestPrivate(const DeleteLoggerDefinitionRequestPrivate &other,
                                   DeleteLoggerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
