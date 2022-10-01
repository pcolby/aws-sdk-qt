// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWSREQUEST_H
#define QTAWS_LISTFLOWSREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListFlowsRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT ListFlowsRequest : public MediaConnectRequest {

public:
    ListFlowsRequest(const ListFlowsRequest &other);
    ListFlowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
