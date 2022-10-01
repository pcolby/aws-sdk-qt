// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONREQUEST_H
#define QTAWS_GETCONNECTORDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetConnectorDefinitionRequest : public GreengrassRequest {

public:
    GetConnectorDefinitionRequest(const GetConnectorDefinitionRequest &other);
    GetConnectorDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
