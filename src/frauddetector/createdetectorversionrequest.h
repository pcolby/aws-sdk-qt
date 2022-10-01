// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORVERSIONREQUEST_H
#define QTAWS_CREATEDETECTORVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateDetectorVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateDetectorVersionRequest : public FraudDetectorRequest {

public:
    CreateDetectorVersionRequest(const CreateDetectorVersionRequest &other);
    CreateDetectorVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
