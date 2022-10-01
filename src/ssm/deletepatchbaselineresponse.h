// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPATCHBASELINERESPONSE_H
#define QTAWS_DELETEPATCHBASELINERESPONSE_H

#include "ssmresponse.h"
#include "deletepatchbaselinerequest.h"

namespace QtAws {
namespace Ssm {

class DeletePatchBaselineResponsePrivate;

class QTAWSSSM_EXPORT DeletePatchBaselineResponse : public SsmResponse {
    Q_OBJECT

public:
    DeletePatchBaselineResponse(const DeletePatchBaselineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePatchBaselineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePatchBaselineResponse)
    Q_DISABLE_COPY(DeletePatchBaselineResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
