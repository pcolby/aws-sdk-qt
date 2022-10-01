// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONREQUEST_P_H
#define QTAWS_GETLOGGERDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getloggerdefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionRequest;

class GetLoggerDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetLoggerDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetLoggerDefinitionRequest * const q);
    GetLoggerDefinitionRequestPrivate(const GetLoggerDefinitionRequestPrivate &other,
                                   GetLoggerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
