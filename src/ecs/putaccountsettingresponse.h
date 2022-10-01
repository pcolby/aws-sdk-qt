// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSETTINGRESPONSE_H
#define QTAWS_PUTACCOUNTSETTINGRESPONSE_H

#include "ecsresponse.h"
#include "putaccountsettingrequest.h"

namespace QtAws {
namespace Ecs {

class PutAccountSettingResponsePrivate;

class QTAWSECS_EXPORT PutAccountSettingResponse : public EcsResponse {
    Q_OBJECT

public:
    PutAccountSettingResponse(const PutAccountSettingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountSettingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSettingResponse)
    Q_DISABLE_COPY(PutAccountSettingResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
