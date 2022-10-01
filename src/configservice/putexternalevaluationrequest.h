// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALEVALUATIONREQUEST_H
#define QTAWS_PUTEXTERNALEVALUATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutExternalEvaluationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutExternalEvaluationRequest : public ConfigServiceRequest {

public:
    PutExternalEvaluationRequest(const PutExternalEvaluationRequest &other);
    PutExternalEvaluationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutExternalEvaluationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
