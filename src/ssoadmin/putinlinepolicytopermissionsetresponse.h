// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINLINEPOLICYTOPERMISSIONSETRESPONSE_H
#define QTAWS_PUTINLINEPOLICYTOPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "putinlinepolicytopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class PutInlinePolicyToPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT PutInlinePolicyToPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    PutInlinePolicyToPermissionSetResponse(const PutInlinePolicyToPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInlinePolicyToPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInlinePolicyToPermissionSetResponse)
    Q_DISABLE_COPY(PutInlinePolicyToPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
