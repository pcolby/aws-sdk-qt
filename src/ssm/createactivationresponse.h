// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVATIONRESPONSE_H
#define QTAWS_CREATEACTIVATIONRESPONSE_H

#include "ssmresponse.h"
#include "createactivationrequest.h"

namespace QtAws {
namespace Ssm {

class CreateActivationResponsePrivate;

class QTAWSSSM_EXPORT CreateActivationResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateActivationResponse(const CreateActivationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateActivationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActivationResponse)
    Q_DISABLE_COPY(CreateActivationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
