// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONREQUEST_P_H
#define QTAWS_CREATELOGGERDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionRequest;

class CreateLoggerDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateLoggerDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateLoggerDefinitionRequest * const q);
    CreateLoggerDefinitionRequestPrivate(const CreateLoggerDefinitionRequestPrivate &other,
                                   CreateLoggerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
