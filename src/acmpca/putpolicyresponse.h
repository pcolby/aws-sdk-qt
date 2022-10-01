// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOLICYRESPONSE_H
#define QTAWS_PUTPOLICYRESPONSE_H

#include "acmpcaresponse.h"
#include "putpolicyrequest.h"

namespace QtAws {
namespace AcmPca {

class PutPolicyResponsePrivate;

class QTAWSACMPCA_EXPORT PutPolicyResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    PutPolicyResponse(const PutPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPolicyResponse)
    Q_DISABLE_COPY(PutPolicyResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
