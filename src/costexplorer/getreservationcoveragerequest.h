// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONCOVERAGEREQUEST_H
#define QTAWS_GETRESERVATIONCOVERAGEREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationCoverageRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetReservationCoverageRequest : public CostExplorerRequest {

public:
    GetReservationCoverageRequest(const GetReservationCoverageRequest &other);
    GetReservationCoverageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservationCoverageRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
