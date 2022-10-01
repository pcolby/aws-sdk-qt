// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWSOURCESREQUEST_H
#define QTAWS_ADDFLOWSOURCESREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowSourcesRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowSourcesRequest : public MediaConnectRequest {

public:
    AddFlowSourcesRequest(const AddFlowSourcesRequest &other);
    AddFlowSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowSourcesRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
