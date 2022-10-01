// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEPERMISSIONSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribePermissionsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribePermissionsRequest : public OpsWorksRequest {

public:
    DescribePermissionsRequest(const DescribePermissionsRequest &other);
    DescribePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePermissionsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
