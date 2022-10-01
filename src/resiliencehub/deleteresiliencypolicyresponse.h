// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESILIENCYPOLICYRESPONSE_H
#define QTAWS_DELETERESILIENCYPOLICYRESPONSE_H

#include "resiliencehubresponse.h"
#include "deleteresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteResiliencyPolicyResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DeleteResiliencyPolicyResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DeleteResiliencyPolicyResponse(const DeleteResiliencyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResiliencyPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResiliencyPolicyResponse)
    Q_DISABLE_COPY(DeleteResiliencyPolicyResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
