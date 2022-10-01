// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTORGANIZATIONCONFORMANCEPACKREQUEST_H
#define QTAWS_PUTORGANIZATIONCONFORMANCEPACKREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutOrganizationConformancePackRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutOrganizationConformancePackRequest : public ConfigServiceRequest {

public:
    PutOrganizationConformancePackRequest(const PutOrganizationConformancePackRequest &other);
    PutOrganizationConformancePackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutOrganizationConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
