// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTUPLOADCREDENTIALSRESPONSE_P_H
#define QTAWS_REQUESTUPLOADCREDENTIALSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class RequestUploadCredentialsResponse;

class RequestUploadCredentialsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit RequestUploadCredentialsResponsePrivate(RequestUploadCredentialsResponse * const q);

    void parseRequestUploadCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestUploadCredentialsResponse)
    Q_DISABLE_COPY(RequestUploadCredentialsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
