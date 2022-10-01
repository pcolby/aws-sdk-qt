// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAENDPOINTREQUEST_H
#define QTAWS_GETDATAENDPOINTREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class GetDataEndpointRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT GetDataEndpointRequest : public KinesisVideoRequest {

public:
    GetDataEndpointRequest(const GetDataEndpointRequest &other);
    GetDataEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataEndpointRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
