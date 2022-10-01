// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETICESERVERCONFIGRESPONSE_H
#define QTAWS_GETICESERVERCONFIGRESPONSE_H

#include "kinesisvideosignalingresponse.h"
#include "geticeserverconfigrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class GetIceServerConfigResponsePrivate;

class QTAWSKINESISVIDEOSIGNALING_EXPORT GetIceServerConfigResponse : public KinesisVideoSignalingResponse {
    Q_OBJECT

public:
    GetIceServerConfigResponse(const GetIceServerConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIceServerConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIceServerConfigResponse)
    Q_DISABLE_COPY(GetIceServerConfigResponse)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
