// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORVERSIONREQUEST_H
#define QTAWS_GETDETECTORVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetDetectorVersionRequest : public FraudDetectorRequest {

public:
    GetDetectorVersionRequest(const GetDetectorVersionRequest &other);
    GetDetectorVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
