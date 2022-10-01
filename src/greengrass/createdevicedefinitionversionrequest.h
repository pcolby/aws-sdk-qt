// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONVERSIONREQUEST_H
#define QTAWS_CREATEDEVICEDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateDeviceDefinitionVersionRequest : public GreengrassRequest {

public:
    CreateDeviceDefinitionVersionRequest(const CreateDeviceDefinitionVersionRequest &other);
    CreateDeviceDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
