// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATESESSIONRESPONSE_H
#define QTAWS_TERMINATESESSIONRESPONSE_H

#include "ssmresponse.h"
#include "terminatesessionrequest.h"

namespace QtAws {
namespace Ssm {

class TerminateSessionResponsePrivate;

class QTAWSSSM_EXPORT TerminateSessionResponse : public SsmResponse {
    Q_OBJECT

public:
    TerminateSessionResponse(const TerminateSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateSessionResponse)
    Q_DISABLE_COPY(TerminateSessionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
