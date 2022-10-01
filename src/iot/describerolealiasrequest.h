// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROLEALIASREQUEST_H
#define QTAWS_DESCRIBEROLEALIASREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeRoleAliasRequestPrivate;

class QTAWSIOT_EXPORT DescribeRoleAliasRequest : public IoTRequest {

public:
    DescribeRoleAliasRequest(const DescribeRoleAliasRequest &other);
    DescribeRoleAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRoleAliasRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
