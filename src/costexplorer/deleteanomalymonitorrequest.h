// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYMONITORREQUEST_H
#define QTAWS_DELETEANOMALYMONITORREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalyMonitorRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT DeleteAnomalyMonitorRequest : public CostExplorerRequest {

public:
    DeleteAnomalyMonitorRequest(const DeleteAnomalyMonitorRequest &other);
    DeleteAnomalyMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
