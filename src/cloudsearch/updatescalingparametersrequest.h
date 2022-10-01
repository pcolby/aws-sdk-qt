// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPARAMETERSREQUEST_H
#define QTAWS_UPDATESCALINGPARAMETERSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateScalingParametersRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateScalingParametersRequest : public CloudSearchRequest {

public:
    UpdateScalingParametersRequest(const UpdateScalingParametersRequest &other);
    UpdateScalingParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScalingParametersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
