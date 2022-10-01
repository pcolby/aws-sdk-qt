// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONUTILIZATIONREQUEST_H
#define QTAWS_GETRESERVATIONUTILIZATIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationUtilizationRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetReservationUtilizationRequest : public CostExplorerRequest {

public:
    GetReservationUtilizationRequest(const GetReservationUtilizationRequest &other);
    GetReservationUtilizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservationUtilizationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
