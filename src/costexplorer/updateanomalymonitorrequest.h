// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYMONITORREQUEST_H
#define QTAWS_UPDATEANOMALYMONITORREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalyMonitorRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateAnomalyMonitorRequest : public CostExplorerRequest {

public:
    UpdateAnomalyMonitorRequest(const UpdateAnomalyMonitorRequest &other);
    UpdateAnomalyMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
