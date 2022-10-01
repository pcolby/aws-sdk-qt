// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTINSTANCESTATUSREQUEST_H
#define QTAWS_REPORTINSTANCESTATUSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReportInstanceStatusRequestPrivate;

class QTAWSEC2_EXPORT ReportInstanceStatusRequest : public Ec2Request {

public:
    ReportInstanceStatusRequest(const ReportInstanceStatusRequest &other);
    ReportInstanceStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReportInstanceStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
