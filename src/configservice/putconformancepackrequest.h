// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFORMANCEPACKREQUEST_H
#define QTAWS_PUTCONFORMANCEPACKREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutConformancePackRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConformancePackRequest : public ConfigServiceRequest {

public:
    PutConformancePackRequest(const PutConformancePackRequest &other);
    PutConformancePackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
