// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETCONNECTORDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectorDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetConnectorDefinitionVersionRequest : public GreengrassRequest {

public:
    GetConnectorDefinitionVersionRequest(const GetConnectorDefinitionVersionRequest &other);
    GetConnectorDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectorDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
