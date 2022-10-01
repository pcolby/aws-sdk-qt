// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETDEVICEDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetDeviceDefinitionVersionRequest : public GreengrassRequest {

public:
    GetDeviceDefinitionVersionRequest(const GetDeviceDefinitionVersionRequest &other);
    GetDeviceDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
