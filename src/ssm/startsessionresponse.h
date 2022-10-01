// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSESSIONRESPONSE_H
#define QTAWS_STARTSESSIONRESPONSE_H

#include "ssmresponse.h"
#include "startsessionrequest.h"

namespace QtAws {
namespace Ssm {

class StartSessionResponsePrivate;

class QTAWSSSM_EXPORT StartSessionResponse : public SsmResponse {
    Q_OBJECT

public:
    StartSessionResponse(const StartSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSessionResponse)
    Q_DISABLE_COPY(StartSessionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
