// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESREQUEST_H
#define QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class ListConformancePackComplianceScoresRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT ListConformancePackComplianceScoresRequest : public ConfigServiceRequest {

public:
    ListConformancePackComplianceScoresRequest(const ListConformancePackComplianceScoresRequest &other);
    ListConformancePackComplianceScoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConformancePackComplianceScoresRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
