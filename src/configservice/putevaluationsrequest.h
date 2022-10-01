// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVALUATIONSREQUEST_H
#define QTAWS_PUTEVALUATIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutEvaluationsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutEvaluationsRequest : public ConfigServiceRequest {

public:
    PutEvaluationsRequest(const PutEvaluationsRequest &other);
    PutEvaluationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEvaluationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
