// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONVERSIONREQUEST_H
#define QTAWS_CREATELOGGERDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateLoggerDefinitionVersionRequest : public GreengrassRequest {

public:
    CreateLoggerDefinitionVersionRequest(const CreateLoggerDefinitionVersionRequest &other);
    CreateLoggerDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoggerDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
