// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONREQUEST_H
#define QTAWS_CREATELOGGERDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateLoggerDefinitionRequest : public GreengrassRequest {

public:
    CreateLoggerDefinitionRequest(const CreateLoggerDefinitionRequest &other);
    CreateLoggerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
