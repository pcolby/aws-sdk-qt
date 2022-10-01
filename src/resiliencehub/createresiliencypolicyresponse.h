// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESILIENCYPOLICYRESPONSE_H
#define QTAWS_CREATERESILIENCYPOLICYRESPONSE_H

#include "resiliencehubresponse.h"
#include "createresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class CreateResiliencyPolicyResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT CreateResiliencyPolicyResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    CreateResiliencyPolicyResponse(const CreateResiliencyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResiliencyPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResiliencyPolicyResponse)
    Q_DISABLE_COPY(CreateResiliencyPolicyResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
