// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONREQUEST_H
#define QTAWS_GETLOGGERDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetLoggerDefinitionRequest : public GreengrassRequest {

public:
    GetLoggerDefinitionRequest(const GetLoggerDefinitionRequest &other);
    GetLoggerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
