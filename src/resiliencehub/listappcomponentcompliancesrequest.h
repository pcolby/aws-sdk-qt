// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTCOMPLIANCESREQUEST_H
#define QTAWS_LISTAPPCOMPONENTCOMPLIANCESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentCompliancesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppComponentCompliancesRequest : public ResilienceHubRequest {

public:
    ListAppComponentCompliancesRequest(const ListAppComponentCompliancesRequest &other);
    ListAppComponentCompliancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppComponentCompliancesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
