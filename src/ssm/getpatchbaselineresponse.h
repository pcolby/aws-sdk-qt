// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINERESPONSE_H
#define QTAWS_GETPATCHBASELINERESPONSE_H

#include "ssmresponse.h"
#include "getpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineResponsePrivate;

class QTAWSSSM_EXPORT GetPatchBaselineResponse : public SsmResponse {
    Q_OBJECT

public:
    GetPatchBaselineResponse(const GetPatchBaselineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPatchBaselineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPatchBaselineResponse)
    Q_DISABLE_COPY(GetPatchBaselineResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
