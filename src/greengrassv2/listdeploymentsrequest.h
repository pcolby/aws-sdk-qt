// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSREQUEST_H
#define QTAWS_LISTDEPLOYMENTSREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ListDeploymentsRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ListDeploymentsRequest : public GreengrassV2Request {

public:
    ListDeploymentsRequest(const ListDeploymentsRequest &other);
    ListDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
