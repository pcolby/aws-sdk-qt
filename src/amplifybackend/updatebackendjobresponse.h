// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDJOBRESPONSE_H
#define QTAWS_UPDATEBACKENDJOBRESPONSE_H

#include "amplifybackendresponse.h"
#include "updatebackendjobrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendJobResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendJobResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    UpdateBackendJobResponse(const UpdateBackendJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBackendJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendJobResponse)
    Q_DISABLE_COPY(UpdateBackendJobResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
