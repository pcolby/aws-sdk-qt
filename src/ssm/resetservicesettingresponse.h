// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESETTINGRESPONSE_H
#define QTAWS_RESETSERVICESETTINGRESPONSE_H

#include "ssmresponse.h"
#include "resetservicesettingrequest.h"

namespace QtAws {
namespace Ssm {

class ResetServiceSettingResponsePrivate;

class QTAWSSSM_EXPORT ResetServiceSettingResponse : public SsmResponse {
    Q_OBJECT

public:
    ResetServiceSettingResponse(const ResetServiceSettingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetServiceSettingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetServiceSettingResponse)
    Q_DISABLE_COPY(ResetServiceSettingResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
