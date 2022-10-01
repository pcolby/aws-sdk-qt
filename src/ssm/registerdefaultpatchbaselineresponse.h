// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEFAULTPATCHBASELINERESPONSE_H
#define QTAWS_REGISTERDEFAULTPATCHBASELINERESPONSE_H

#include "ssmresponse.h"
#include "registerdefaultpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class RegisterDefaultPatchBaselineResponsePrivate;

class QTAWSSSM_EXPORT RegisterDefaultPatchBaselineResponse : public SsmResponse {
    Q_OBJECT

public:
    RegisterDefaultPatchBaselineResponse(const RegisterDefaultPatchBaselineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterDefaultPatchBaselineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDefaultPatchBaselineResponse)
    Q_DISABLE_COPY(RegisterDefaultPatchBaselineResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
