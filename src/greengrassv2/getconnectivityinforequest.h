// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIVITYINFOREQUEST_H
#define QTAWS_GETCONNECTIVITYINFOREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class GetConnectivityInfoRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT GetConnectivityInfoRequest : public GreengrassV2Request {

public:
    GetConnectivityInfoRequest(const GetConnectivityInfoRequest &other);
    GetConnectivityInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectivityInfoRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
