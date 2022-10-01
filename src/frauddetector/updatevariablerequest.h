// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVARIABLEREQUEST_H
#define QTAWS_UPDATEVARIABLEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateVariableRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateVariableRequest : public FraudDetectorRequest {

public:
    UpdateVariableRequest(const UpdateVariableRequest &other);
    UpdateVariableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
