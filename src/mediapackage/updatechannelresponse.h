// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELRESPONSE_H
#define QTAWS_UPDATECHANNELRESPONSE_H

#include "mediapackageresponse.h"
#include "updatechannelrequest.h"

namespace QtAws {
namespace MediaPackage {

class UpdateChannelResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT UpdateChannelResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    UpdateChannelResponse(const UpdateChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelResponse)
    Q_DISABLE_COPY(UpdateChannelResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
