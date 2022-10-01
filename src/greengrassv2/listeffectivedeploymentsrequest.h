// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEFFECTIVEDEPLOYMENTSREQUEST_H
#define QTAWS_LISTEFFECTIVEDEPLOYMENTSREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ListEffectiveDeploymentsRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ListEffectiveDeploymentsRequest : public GreengrassV2Request {

public:
    ListEffectiveDeploymentsRequest(const ListEffectiveDeploymentsRequest &other);
    ListEffectiveDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEffectiveDeploymentsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
