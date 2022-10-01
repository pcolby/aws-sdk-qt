// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEFEATURERESPONSE_H
#define QTAWS_EVALUATEFEATURERESPONSE_H

#include "evidentlyresponse.h"
#include "evaluatefeaturerequest.h"

namespace QtAws {
namespace Evidently {

class EvaluateFeatureResponsePrivate;

class QTAWSEVIDENTLY_EXPORT EvaluateFeatureResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    EvaluateFeatureResponse(const EvaluateFeatureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EvaluateFeatureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateFeatureResponse)
    Q_DISABLE_COPY(EvaluateFeatureResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
