// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONVALUESREQUEST_H
#define QTAWS_GETDIMENSIONVALUESREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetDimensionValuesRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetDimensionValuesRequest : public CostExplorerRequest {

public:
    GetDimensionValuesRequest(const GetDimensionValuesRequest &other);
    GetDimensionValuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDimensionValuesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
