// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTOKENRESPONSE_H
#define QTAWS_REFRESHTOKENRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "refreshtokenrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class RefreshTokenResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT RefreshTokenResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    RefreshTokenResponse(const RefreshTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RefreshTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshTokenResponse)
    Q_DISABLE_COPY(RefreshTokenResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
