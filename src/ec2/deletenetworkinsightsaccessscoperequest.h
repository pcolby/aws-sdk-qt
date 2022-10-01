// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEREQUEST_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeRequestPrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsAccessScopeRequest : public Ec2Request {

public:
    DeleteNetworkInsightsAccessScopeRequest(const DeleteNetworkInsightsAccessScopeRequest &other);
    DeleteNetworkInsightsAccessScopeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsAccessScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
