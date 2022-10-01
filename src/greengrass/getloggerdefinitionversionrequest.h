// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETLOGGERDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetLoggerDefinitionVersionRequest : public GreengrassRequest {

public:
    GetLoggerDefinitionVersionRequest(const GetLoggerDefinitionVersionRequest &other);
    GetLoggerDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggerDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
