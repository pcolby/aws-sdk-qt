// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPOLICIESRESPONSE_H
#define QTAWS_LISTKEYPOLICIESRESPONSE_H

#include "kmsresponse.h"
#include "listkeypoliciesrequest.h"

namespace QtAws {
namespace Kms {

class ListKeyPoliciesResponsePrivate;

class QTAWSKMS_EXPORT ListKeyPoliciesResponse : public KmsResponse {
    Q_OBJECT

public:
    ListKeyPoliciesResponse(const ListKeyPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKeyPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyPoliciesResponse)
    Q_DISABLE_COPY(ListKeyPoliciesResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
