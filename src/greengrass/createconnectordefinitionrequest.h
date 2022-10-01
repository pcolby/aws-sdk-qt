// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORDEFINITIONREQUEST_H
#define QTAWS_CREATECONNECTORDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateConnectorDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateConnectorDefinitionRequest : public GreengrassRequest {

public:
    CreateConnectorDefinitionRequest(const CreateConnectorDefinitionRequest &other);
    CreateConnectorDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
