// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWOUTPUTSREQUEST_H
#define QTAWS_ADDFLOWOUTPUTSREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowOutputsRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowOutputsRequest : public MediaConnectRequest {

public:
    AddFlowOutputsRequest(const AddFlowOutputsRequest &other);
    AddFlowOutputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowOutputsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
