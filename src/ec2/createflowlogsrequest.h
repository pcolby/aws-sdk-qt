// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWLOGSREQUEST_H
#define QTAWS_CREATEFLOWLOGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateFlowLogsRequestPrivate;

class QTAWSEC2_EXPORT CreateFlowLogsRequest : public Ec2Request {

public:
    CreateFlowLogsRequest(const CreateFlowLogsRequest &other);
    CreateFlowLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowLogsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
