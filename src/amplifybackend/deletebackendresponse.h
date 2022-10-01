// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDRESPONSE_H
#define QTAWS_DELETEBACKENDRESPONSE_H

#include "amplifybackendresponse.h"
#include "deletebackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    DeleteBackendResponse(const DeleteBackendRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackendRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendResponse)
    Q_DISABLE_COPY(DeleteBackendResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
