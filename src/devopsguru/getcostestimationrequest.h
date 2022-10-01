// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTESTIMATIONREQUEST_H
#define QTAWS_GETCOSTESTIMATIONREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetCostEstimationRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT GetCostEstimationRequest : public DevOpsGuruRequest {

public:
    GetCostEstimationRequest(const GetCostEstimationRequest &other);
    GetCostEstimationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostEstimationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
