// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCESTATUSREQUEST_H
#define QTAWS_LISTCOMPLIANCESTATUSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class ListComplianceStatusRequestPrivate;

class QTAWSFMS_EXPORT ListComplianceStatusRequest : public FmsRequest {

public:
    ListComplianceStatusRequest(const ListComplianceStatusRequest &other);
    ListComplianceStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComplianceStatusRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
