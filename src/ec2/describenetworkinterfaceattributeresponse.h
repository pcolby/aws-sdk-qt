// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describenetworkinterfaceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfaceAttributeResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInterfaceAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInterfaceAttributeResponse(const DescribeNetworkInterfaceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInterfaceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfaceAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
