// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONSTATUSREQUEST_H
#define QTAWS_UPDATEDETECTORVERSIONSTATUSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionStatusRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateDetectorVersionStatusRequest : public FraudDetectorRequest {

public:
    UpdateDetectorVersionStatusRequest(const UpdateDetectorVersionStatusRequest &other);
    UpdateDetectorVersionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorVersionStatusRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
