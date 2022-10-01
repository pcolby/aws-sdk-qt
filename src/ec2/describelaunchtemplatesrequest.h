// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATESREQUEST_H
#define QTAWS_DESCRIBELAUNCHTEMPLATESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplatesRequestPrivate;

class QTAWSEC2_EXPORT DescribeLaunchTemplatesRequest : public Ec2Request {

public:
    DescribeLaunchTemplatesRequest(const DescribeLaunchTemplatesRequest &other);
    DescribeLaunchTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchTemplatesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
