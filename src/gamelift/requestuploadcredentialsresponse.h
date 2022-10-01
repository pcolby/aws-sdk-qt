// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTUPLOADCREDENTIALSRESPONSE_H
#define QTAWS_REQUESTUPLOADCREDENTIALSRESPONSE_H

#include "gameliftresponse.h"
#include "requestuploadcredentialsrequest.h"

namespace QtAws {
namespace GameLift {

class RequestUploadCredentialsResponsePrivate;

class QTAWSGAMELIFT_EXPORT RequestUploadCredentialsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    RequestUploadCredentialsResponse(const RequestUploadCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestUploadCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestUploadCredentialsResponse)
    Q_DISABLE_COPY(RequestUploadCredentialsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
