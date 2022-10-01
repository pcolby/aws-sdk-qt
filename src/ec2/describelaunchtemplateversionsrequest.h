// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H
#define QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplateVersionsRequestPrivate;

class QTAWSEC2_EXPORT DescribeLaunchTemplateVersionsRequest : public Ec2Request {

public:
    DescribeLaunchTemplateVersionsRequest(const DescribeLaunchTemplateVersionsRequest &other);
    DescribeLaunchTemplateVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchTemplateVersionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
