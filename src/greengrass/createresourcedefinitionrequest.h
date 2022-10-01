// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONREQUEST_H
#define QTAWS_CREATERESOURCEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateResourceDefinitionRequest : public GreengrassRequest {

public:
    CreateResourceDefinitionRequest(const CreateResourceDefinitionRequest &other);
    CreateResourceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
