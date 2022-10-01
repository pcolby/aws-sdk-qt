// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINSIGHTSPATHREQUEST_H
#define QTAWS_CREATENETWORKINSIGHTSPATHREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInsightsPathRequestPrivate;

class QTAWSEC2_EXPORT CreateNetworkInsightsPathRequest : public Ec2Request {

public:
    CreateNetworkInsightsPathRequest(const CreateNetworkInsightsPathRequest &other);
    CreateNetworkInsightsPathRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkInsightsPathRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
