// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATECHANNELCREDENTIALSRESPONSE_H
#define QTAWS_ROTATECHANNELCREDENTIALSRESPONSE_H

#include "mediapackageresponse.h"
#include "rotatechannelcredentialsrequest.h"

namespace QtAws {
namespace MediaPackage {

class RotateChannelCredentialsResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT RotateChannelCredentialsResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    RotateChannelCredentialsResponse(const RotateChannelCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RotateChannelCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateChannelCredentialsResponse)
    Q_DISABLE_COPY(RotateChannelCredentialsResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
