// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELVERSIONREQUEST_H
#define QTAWS_CREATEMODELVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateModelVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateModelVersionRequest : public FraudDetectorRequest {

public:
    CreateModelVersionRequest(const CreateModelVersionRequest &other);
    CreateModelVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
