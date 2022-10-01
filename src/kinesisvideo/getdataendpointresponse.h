// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAENDPOINTRESPONSE_H
#define QTAWS_GETDATAENDPOINTRESPONSE_H

#include "kinesisvideoresponse.h"
#include "getdataendpointrequest.h"

namespace QtAws {
namespace KinesisVideo {

class GetDataEndpointResponsePrivate;

class QTAWSKINESISVIDEO_EXPORT GetDataEndpointResponse : public KinesisVideoResponse {
    Q_OBJECT

public:
    GetDataEndpointResponse(const GetDataEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataEndpointResponse)
    Q_DISABLE_COPY(GetDataEndpointResponse)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
