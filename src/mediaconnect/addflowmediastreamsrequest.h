// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFLOWMEDIASTREAMSREQUEST_H
#define QTAWS_ADDFLOWMEDIASTREAMSREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class AddFlowMediaStreamsRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT AddFlowMediaStreamsRequest : public MediaConnectRequest {

public:
    AddFlowMediaStreamsRequest(const AddFlowMediaStreamsRequest &other);
    AddFlowMediaStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddFlowMediaStreamsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
