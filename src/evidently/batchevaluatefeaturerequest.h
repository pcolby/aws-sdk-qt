// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEFEATUREREQUEST_H
#define QTAWS_BATCHEVALUATEFEATUREREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class BatchEvaluateFeatureRequestPrivate;

class QTAWSEVIDENTLY_EXPORT BatchEvaluateFeatureRequest : public EvidentlyRequest {

public:
    BatchEvaluateFeatureRequest(const BatchEvaluateFeatureRequest &other);
    BatchEvaluateFeatureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEvaluateFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
