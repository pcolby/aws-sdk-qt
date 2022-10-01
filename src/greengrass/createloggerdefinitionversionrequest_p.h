// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATELOGGERDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createloggerdefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionVersionRequest;

class CreateLoggerDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateLoggerDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateLoggerDefinitionVersionRequest * const q);
    CreateLoggerDefinitionVersionRequestPrivate(const CreateLoggerDefinitionVersionRequestPrivate &other,
                                   CreateLoggerDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoggerDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
