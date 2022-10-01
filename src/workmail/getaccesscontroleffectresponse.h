// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSCONTROLEFFECTRESPONSE_H
#define QTAWS_GETACCESSCONTROLEFFECTRESPONSE_H

#include "workmailresponse.h"
#include "getaccesscontroleffectrequest.h"

namespace QtAws {
namespace WorkMail {

class GetAccessControlEffectResponsePrivate;

class QTAWSWORKMAIL_EXPORT GetAccessControlEffectResponse : public WorkMailResponse {
    Q_OBJECT

public:
    GetAccessControlEffectResponse(const GetAccessControlEffectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessControlEffectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessControlEffectResponse)
    Q_DISABLE_COPY(GetAccessControlEffectResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
