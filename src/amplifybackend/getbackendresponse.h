// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDRESPONSE_H
#define QTAWS_GETBACKENDRESPONSE_H

#include "amplifybackendresponse.h"
#include "getbackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GetBackendResponse(const GetBackendRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackendRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendResponse)
    Q_DISABLE_COPY(GetBackendResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
