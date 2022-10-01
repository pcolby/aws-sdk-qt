// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYMONITORREQUEST_H
#define QTAWS_CREATEANOMALYMONITORREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalyMonitorRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT CreateAnomalyMonitorRequest : public CostExplorerRequest {

public:
    CreateAnomalyMonitorRequest(const CreateAnomalyMonitorRequest &other);
    CreateAnomalyMonitorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
