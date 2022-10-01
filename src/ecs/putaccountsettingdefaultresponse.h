// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSETTINGDEFAULTRESPONSE_H
#define QTAWS_PUTACCOUNTSETTINGDEFAULTRESPONSE_H

#include "ecsresponse.h"
#include "putaccountsettingdefaultrequest.h"

namespace QtAws {
namespace Ecs {

class PutAccountSettingDefaultResponsePrivate;

class QTAWSECS_EXPORT PutAccountSettingDefaultResponse : public EcsResponse {
    Q_OBJECT

public:
    PutAccountSettingDefaultResponse(const PutAccountSettingDefaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountSettingDefaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSettingDefaultResponse)
    Q_DISABLE_COPY(PutAccountSettingDefaultResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
