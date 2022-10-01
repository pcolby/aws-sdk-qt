// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTPATCHBASELINERESPONSE_H
#define QTAWS_GETDEFAULTPATCHBASELINERESPONSE_H

#include "ssmresponse.h"
#include "getdefaultpatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class GetDefaultPatchBaselineResponsePrivate;

class QTAWSSSM_EXPORT GetDefaultPatchBaselineResponse : public SsmResponse {
    Q_OBJECT

public:
    GetDefaultPatchBaselineResponse(const GetDefaultPatchBaselineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDefaultPatchBaselineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDefaultPatchBaselineResponse)
    Q_DISABLE_COPY(GetDefaultPatchBaselineResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
