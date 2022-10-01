// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEDEFINITIONREQUEST_H
#define QTAWS_DELETEDEVICEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteDeviceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT DeleteDeviceDefinitionRequest : public GreengrassRequest {

public:
    DeleteDeviceDefinitionRequest(const DeleteDeviceDefinitionRequest &other);
    DeleteDeviceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
