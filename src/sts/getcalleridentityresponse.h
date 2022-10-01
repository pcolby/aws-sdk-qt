// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLERIDENTITYRESPONSE_H
#define QTAWS_GETCALLERIDENTITYRESPONSE_H

#include "stsresponse.h"
#include "getcalleridentityrequest.h"

namespace QtAws {
namespace Sts {

class GetCallerIdentityResponsePrivate;

class QTAWSSTS_EXPORT GetCallerIdentityResponse : public StsResponse {
    Q_OBJECT

public:
    GetCallerIdentityResponse(const GetCallerIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCallerIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCallerIdentityResponse)
    Q_DISABLE_COPY(GetCallerIdentityResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
