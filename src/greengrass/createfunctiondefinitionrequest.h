// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONDEFINITIONREQUEST_H
#define QTAWS_CREATEFUNCTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateFunctionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateFunctionDefinitionRequest : public GreengrassRequest {

public:
    CreateFunctionDefinitionRequest(const CreateFunctionDefinitionRequest &other);
    CreateFunctionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
