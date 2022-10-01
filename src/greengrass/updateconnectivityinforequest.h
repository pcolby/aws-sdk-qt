// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIVITYINFOREQUEST_H
#define QTAWS_UPDATECONNECTIVITYINFOREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateConnectivityInfoRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateConnectivityInfoRequest : public GreengrassRequest {

public:
    UpdateConnectivityInfoRequest(const UpdateConnectivityInfoRequest &other);
    UpdateConnectivityInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectivityInfoRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
