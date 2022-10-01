// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONVERSIONREQUEST_H
#define QTAWS_CREATERESOURCEDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateResourceDefinitionVersionRequest : public GreengrassRequest {

public:
    CreateResourceDefinitionVersionRequest(const CreateResourceDefinitionVersionRequest &other);
    CreateResourceDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
