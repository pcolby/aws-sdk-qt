// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACESRESPONSE_H
#define QTAWS_DESCRIBENETWORKINTERFACESRESPONSE_H

#include "ec2response.h"
#include "describenetworkinterfacesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacesResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInterfacesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInterfacesResponse(const DescribeNetworkInterfacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInterfacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfacesResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfacesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
