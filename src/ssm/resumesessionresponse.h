// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESESSIONRESPONSE_H
#define QTAWS_RESUMESESSIONRESPONSE_H

#include "ssmresponse.h"
#include "resumesessionrequest.h"

namespace QtAws {
namespace Ssm {

class ResumeSessionResponsePrivate;

class QTAWSSSM_EXPORT ResumeSessionResponse : public SsmResponse {
    Q_OBJECT

public:
    ResumeSessionResponse(const ResumeSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeSessionResponse)
    Q_DISABLE_COPY(ResumeSessionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
