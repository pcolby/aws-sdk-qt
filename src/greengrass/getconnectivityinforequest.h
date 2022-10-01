// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIVITYINFOREQUEST_H
#define QTAWS_GETCONNECTIVITYINFOREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectivityInfoRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetConnectivityInfoRequest : public GreengrassRequest {

public:
    GetConnectivityInfoRequest(const GetConnectivityInfoRequest &other);
    GetConnectivityInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectivityInfoRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
