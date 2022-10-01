// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONREQUEST_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansUtilizationRequest : public CostExplorerRequest {

public:
    GetSavingsPlansUtilizationRequest(const GetSavingsPlansUtilizationRequest &other);
    GetSavingsPlansUtilizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansUtilizationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
