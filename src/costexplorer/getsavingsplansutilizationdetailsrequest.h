// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSREQUEST_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationDetailsRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansUtilizationDetailsRequest : public CostExplorerRequest {

public:
    GetSavingsPlansUtilizationDetailsRequest(const GetSavingsPlansUtilizationDetailsRequest &other);
    GetSavingsPlansUtilizationDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansUtilizationDetailsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
