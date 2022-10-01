// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYZONESRESPONSE_H
#define QTAWS_DESCRIBEAVAILABILITYZONESRESPONSE_H

#include "ec2response.h"
#include "describeavailabilityzonesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAvailabilityZonesResponsePrivate;

class QTAWSEC2_EXPORT DescribeAvailabilityZonesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeAvailabilityZonesResponse(const DescribeAvailabilityZonesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAvailabilityZonesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailabilityZonesResponse)
    Q_DISABLE_COPY(DescribeAvailabilityZonesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
