// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORDEFINITIONVERSIONREQUEST_H
#define QTAWS_CREATECONNECTORDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateConnectorDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateConnectorDefinitionVersionRequest : public GreengrassRequest {

public:
    CreateConnectorDefinitionVersionRequest(const CreateConnectorDefinitionVersionRequest &other);
    CreateConnectorDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectorDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
