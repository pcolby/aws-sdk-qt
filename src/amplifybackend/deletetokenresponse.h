// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENRESPONSE_H
#define QTAWS_DELETETOKENRESPONSE_H

#include "amplifybackendresponse.h"
#include "deletetokenrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteTokenResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteTokenResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    DeleteTokenResponse(const DeleteTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTokenResponse)
    Q_DISABLE_COPY(DeleteTokenResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
