// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONV2JOBSREQUEST_H
#define QTAWS_LISTENTITIESDETECTIONV2JOBSREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListEntitiesDetectionV2JobsRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListEntitiesDetectionV2JobsRequest : public ComprehendMedicalRequest {

public:
    ListEntitiesDetectionV2JobsRequest(const ListEntitiesDetectionV2JobsRequest &other);
    ListEntitiesDetectionV2JobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesDetectionV2JobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
