// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHPROPERTIESREQUEST_H
#define QTAWS_DESCRIBEPATCHPROPERTIESREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchPropertiesRequestPrivate;

class QTAWSSSM_EXPORT DescribePatchPropertiesRequest : public SsmRequest {

public:
    DescribePatchPropertiesRequest(const DescribePatchPropertiesRequest &other);
    DescribePatchPropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePatchPropertiesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
