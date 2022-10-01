// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESILIENCYPOLICYRESPONSE_H
#define QTAWS_UPDATERESILIENCYPOLICYRESPONSE_H

#include "resiliencehubresponse.h"
#include "updateresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class UpdateResiliencyPolicyResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT UpdateResiliencyPolicyResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    UpdateResiliencyPolicyResponse(const UpdateResiliencyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResiliencyPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResiliencyPolicyResponse)
    Q_DISABLE_COPY(UpdateResiliencyPolicyResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
