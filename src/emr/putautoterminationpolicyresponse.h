// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOTERMINATIONPOLICYRESPONSE_H
#define QTAWS_PUTAUTOTERMINATIONPOLICYRESPONSE_H

#include "emrresponse.h"
#include "putautoterminationpolicyrequest.h"

namespace QtAws {
namespace Emr {

class PutAutoTerminationPolicyResponsePrivate;

class QTAWSEMR_EXPORT PutAutoTerminationPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    PutAutoTerminationPolicyResponse(const PutAutoTerminationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAutoTerminationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAutoTerminationPolicyResponse)
    Q_DISABLE_COPY(PutAutoTerminationPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
