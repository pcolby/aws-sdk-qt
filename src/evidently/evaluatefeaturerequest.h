// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEFEATUREREQUEST_H
#define QTAWS_EVALUATEFEATUREREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class EvaluateFeatureRequestPrivate;

class QTAWSEVIDENTLY_EXPORT EvaluateFeatureRequest : public EvidentlyRequest {

public:
    EvaluateFeatureRequest(const EvaluateFeatureRequest &other);
    EvaluateFeatureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
