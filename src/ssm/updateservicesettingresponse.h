// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGRESPONSE_H
#define QTAWS_UPDATESERVICESETTINGRESPONSE_H

#include "ssmresponse.h"
#include "updateservicesettingrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateServiceSettingResponsePrivate;

class QTAWSSSM_EXPORT UpdateServiceSettingResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateServiceSettingResponse(const UpdateServiceSettingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceSettingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceSettingResponse)
    Q_DISABLE_COPY(UpdateServiceSettingResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
