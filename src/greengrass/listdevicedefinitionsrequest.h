// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONSREQUEST_H
#define QTAWS_LISTDEVICEDEFINITIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListDeviceDefinitionsRequest : public GreengrassRequest {

public:
    ListDeviceDefinitionsRequest(const ListDeviceDefinitionsRequest &other);
    ListDeviceDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
