// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPATCHBASELINERESPONSE_H
#define QTAWS_CREATEPATCHBASELINERESPONSE_H

#include "ssmresponse.h"
#include "createpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class CreatePatchBaselineResponsePrivate;

class QTAWSSSM_EXPORT CreatePatchBaselineResponse : public SsmResponse {
    Q_OBJECT

public:
    CreatePatchBaselineResponse(const CreatePatchBaselineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePatchBaselineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePatchBaselineResponse)
    Q_DISABLE_COPY(CreatePatchBaselineResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
