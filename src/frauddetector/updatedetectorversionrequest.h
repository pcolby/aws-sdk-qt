// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONREQUEST_H
#define QTAWS_UPDATEDETECTORVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateDetectorVersionRequest : public FraudDetectorRequest {

public:
    UpdateDetectorVersionRequest(const UpdateDetectorVersionRequest &other);
    UpdateDetectorVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
