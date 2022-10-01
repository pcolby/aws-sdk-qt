// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHWEBIDENTITYRESPONSE_H
#define QTAWS_ASSUMEROLEWITHWEBIDENTITYRESPONSE_H

#include "stsresponse.h"
#include "assumerolewithwebidentityrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithWebIdentityResponsePrivate;

class QTAWSSTS_EXPORT AssumeRoleWithWebIdentityResponse : public StsResponse {
    Q_OBJECT

public:
    AssumeRoleWithWebIdentityResponse(const AssumeRoleWithWebIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssumeRoleWithWebIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeRoleWithWebIdentityResponse)
    Q_DISABLE_COPY(AssumeRoleWithWebIdentityResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
