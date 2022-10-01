// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONTOKENRESPONSE_H
#define QTAWS_GETSESSIONTOKENRESPONSE_H

#include "stsresponse.h"
#include "getsessiontokenrequest.h"

namespace QtAws {
namespace Sts {

class GetSessionTokenResponsePrivate;

class QTAWSSTS_EXPORT GetSessionTokenResponse : public StsResponse {
    Q_OBJECT

public:
    GetSessionTokenResponse(const GetSessionTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSessionTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionTokenResponse)
    Q_DISABLE_COPY(GetSessionTokenResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
