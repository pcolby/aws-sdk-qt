// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONVERSIONREQUEST_H
#define QTAWS_CREATECOREDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateCoreDefinitionVersionRequest : public GreengrassRequest {

public:
    CreateCoreDefinitionVersionRequest(const CreateCoreDefinitionVersionRequest &other);
    CreateCoreDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoreDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
