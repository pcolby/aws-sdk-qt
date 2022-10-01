// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEFORECASTREQUEST_H
#define QTAWS_GETUSAGEFORECASTREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetUsageForecastRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetUsageForecastRequest : public CostExplorerRequest {

public:
    GetUsageForecastRequest(const GetUsageForecastRequest &other);
    GetUsageForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageForecastRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
