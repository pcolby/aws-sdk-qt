// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORSREQUEST_H
#define QTAWS_GETDETECTORSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorsRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetDetectorsRequest : public FraudDetectorRequest {

public:
    GetDetectorsRequest(const GetDetectorsRequest &other);
    GetDetectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
