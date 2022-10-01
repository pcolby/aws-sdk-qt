// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDJOBRESPONSE_H
#define QTAWS_GETBACKENDJOBRESPONSE_H

#include "amplifybackendresponse.h"
#include "getbackendjobrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendJobResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendJobResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GetBackendJobResponse(const GetBackendJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackendJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendJobResponse)
    Q_DISABLE_COPY(GetBackendJobResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
