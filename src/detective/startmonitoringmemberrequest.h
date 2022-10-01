// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERREQUEST_H
#define QTAWS_STARTMONITORINGMEMBERREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class StartMonitoringMemberRequestPrivate;

class QTAWSDETECTIVE_EXPORT StartMonitoringMemberRequest : public DetectiveRequest {

public:
    StartMonitoringMemberRequest(const StartMonitoringMemberRequest &other);
    StartMonitoringMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMonitoringMemberRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
