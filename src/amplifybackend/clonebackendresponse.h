// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONEBACKENDRESPONSE_H
#define QTAWS_CLONEBACKENDRESPONSE_H

#include "amplifybackendresponse.h"
#include "clonebackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CloneBackendResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CloneBackendResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CloneBackendResponse(const CloneBackendRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CloneBackendRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloneBackendResponse)
    Q_DISABLE_COPY(CloneBackendResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
