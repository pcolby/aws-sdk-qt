// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVARIABLEREQUEST_H
#define QTAWS_CREATEVARIABLEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateVariableRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateVariableRequest : public FraudDetectorRequest {

public:
    CreateVariableRequest(const CreateVariableRequest &other);
    CreateVariableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
