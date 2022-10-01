// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTLAUNCHIMAGESREQUEST_H
#define QTAWS_DESCRIBEFASTLAUNCHIMAGESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastLaunchImagesRequestPrivate;

class QTAWSEC2_EXPORT DescribeFastLaunchImagesRequest : public Ec2Request {

public:
    DescribeFastLaunchImagesRequest(const DescribeFastLaunchImagesRequest &other);
    DescribeFastLaunchImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFastLaunchImagesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
