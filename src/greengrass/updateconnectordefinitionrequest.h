// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORDEFINITIONREQUEST_H
#define QTAWS_UPDATECONNECTORDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateConnectorDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateConnectorDefinitionRequest : public GreengrassRequest {

public:
    UpdateConnectorDefinitionRequest(const UpdateConnectorDefinitionRequest &other);
    UpdateConnectorDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
