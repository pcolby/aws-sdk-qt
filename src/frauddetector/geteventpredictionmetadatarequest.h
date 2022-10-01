// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONMETADATAREQUEST_H
#define QTAWS_GETEVENTPREDICTIONMETADATAREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionMetadataRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventPredictionMetadataRequest : public FraudDetectorRequest {

public:
    GetEventPredictionMetadataRequest(const GetEventPredictionMetadataRequest &other);
    GetEventPredictionMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventPredictionMetadataRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
