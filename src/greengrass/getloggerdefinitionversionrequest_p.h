// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETLOGGERDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getloggerdefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionVersionRequest;

class GetLoggerDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetLoggerDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetLoggerDefinitionVersionRequest * const q);
    GetLoggerDefinitionVersionRequestPrivate(const GetLoggerDefinitionVersionRequestPrivate &other,
                                   GetLoggerDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoggerDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
