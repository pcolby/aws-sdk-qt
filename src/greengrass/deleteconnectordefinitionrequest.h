// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORDEFINITIONREQUEST_H
#define QTAWS_DELETECONNECTORDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteConnectorDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT DeleteConnectorDefinitionRequest : public GreengrassRequest {

public:
    DeleteConnectorDefinitionRequest(const DeleteConnectorDefinitionRequest &other);
    DeleteConnectorDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
