// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSREQUEST_H
#define QTAWS_EXPORTEBSVOLUMERECOMMENDATIONSREQUEST_H

#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ExportEBSVolumeRecommendationsRequestPrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ExportEBSVolumeRecommendationsRequest : public ComputeOptimizerRequest {

public:
    ExportEBSVolumeRecommendationsRequest(const ExportEBSVolumeRecommendationsRequest &other);
    ExportEBSVolumeRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportEBSVolumeRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
