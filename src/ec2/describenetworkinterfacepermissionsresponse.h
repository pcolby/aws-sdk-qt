// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSE_H

#include "ec2response.h"
#include "describenetworkinterfacepermissionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacePermissionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInterfacePermissionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInterfacePermissionsResponse(const DescribeNetworkInterfacePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInterfacePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfacePermissionsResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfacePermissionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
