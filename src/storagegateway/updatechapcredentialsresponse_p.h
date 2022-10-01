// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHAPCREDENTIALSRESPONSE_P_H
#define QTAWS_UPDATECHAPCREDENTIALSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateChapCredentialsResponse;

class UpdateChapCredentialsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateChapCredentialsResponsePrivate(UpdateChapCredentialsResponse * const q);

    void parseUpdateChapCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChapCredentialsResponse)
    Q_DISABLE_COPY(UpdateChapCredentialsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
