// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWSREQUEST_H
#define QTAWS_LISTFLOWSREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class ListFlowsRequestPrivate;

class QTAWSAPPFLOW_EXPORT ListFlowsRequest : public AppflowRequest {

public:
    ListFlowsRequest(const ListFlowsRequest &other);
    ListFlowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowsRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
