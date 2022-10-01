// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSREQUEST_H
#define QTAWS_EXPORTEC2INSTANCERECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEC2InstanceRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportEC2InstanceRecommendationsRequest : public ComputeOptimizerRequest {

public:
    ExportEC2InstanceRecommendationsRequest(const ExportEC2InstanceRecommendationsRequest &other);
    ExportEC2InstanceRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportEC2InstanceRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
