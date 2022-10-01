// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONREQUEST_H
#define QTAWS_GETEVENTPREDICTIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventPredictionRequest : public FraudDetectorRequest {

public:
    GetEventPredictionRequest(const GetEventPredictionRequest &other);
    GetEventPredictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventPredictionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
