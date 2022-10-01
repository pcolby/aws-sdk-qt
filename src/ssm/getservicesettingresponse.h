// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGRESPONSE_H
#define QTAWS_GETSERVICESETTINGRESPONSE_H

#include "ssmresponse.h"
#include "getservicesettingrequest.h"

namespace QtAws {
namespace Ssm {

class GetServiceSettingResponsePrivate;

class QTAWSSSM_EXPORT GetServiceSettingResponse : public SsmResponse {
    Q_OBJECT

public:
    GetServiceSettingResponse(const GetServiceSettingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceSettingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceSettingResponse)
    Q_DISABLE_COPY(GetServiceSettingResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
