// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAUTOTERMINATIONPOLICYRESPONSE_H
#define QTAWS_REMOVEAUTOTERMINATIONPOLICYRESPONSE_H

#include "emrresponse.h"
#include "removeautoterminationpolicyrequest.h"

namespace QtAws {
namespace Emr {

class RemoveAutoTerminationPolicyResponsePrivate;

class QTAWSEMR_EXPORT RemoveAutoTerminationPolicyResponse : public EmrResponse {
    Q_OBJECT

public:
    RemoveAutoTerminationPolicyResponse(const RemoveAutoTerminationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAutoTerminationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAutoTerminationPolicyResponse)
    Q_DISABLE_COPY(RemoveAutoTerminationPolicyResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
