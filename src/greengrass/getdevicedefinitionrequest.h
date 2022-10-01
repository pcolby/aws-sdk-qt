// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONREQUEST_H
#define QTAWS_GETDEVICEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetDeviceDefinitionRequest : public GreengrassRequest {

public:
    GetDeviceDefinitionRequest(const GetDeviceDefinitionRequest &other);
    GetDeviceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
