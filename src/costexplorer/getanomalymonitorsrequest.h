// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYMONITORSREQUEST_H
#define QTAWS_GETANOMALYMONITORSREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalyMonitorsRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetAnomalyMonitorsRequest : public CostExplorerRequest {

public:
    GetAnomalyMonitorsRequest(const GetAnomalyMonitorsRequest &other);
    GetAnomalyMonitorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomalyMonitorsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
