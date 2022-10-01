// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOSTESTIMATIONREQUEST_H
#define QTAWS_STARTCOSTESTIMATIONREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class StartCostEstimationRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT StartCostEstimationRequest : public DevOpsGuruRequest {

public:
    StartCostEstimationRequest(const StartCostEstimationRequest &other);
    StartCostEstimationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCostEstimationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
