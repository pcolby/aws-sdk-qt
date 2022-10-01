// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSCOVERAGEREQUEST_H
#define QTAWS_GETSAVINGSPLANSCOVERAGEREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansCoverageRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansCoverageRequest : public CostExplorerRequest {

public:
    GetSavingsPlansCoverageRequest(const GetSavingsPlansCoverageRequest &other);
    GetSavingsPlansCoverageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansCoverageRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
