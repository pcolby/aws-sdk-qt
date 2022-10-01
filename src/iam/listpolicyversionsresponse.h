// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYVERSIONSRESPONSE_H
#define QTAWS_LISTPOLICYVERSIONSRESPONSE_H

#include "iamresponse.h"
#include "listpolicyversionsrequest.h"

namespace QtAws {
namespace Iam {

class ListPolicyVersionsResponsePrivate;

class QTAWSIAM_EXPORT ListPolicyVersionsResponse : public IamResponse {
    Q_OBJECT

public:
    ListPolicyVersionsResponse(const ListPolicyVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPolicyVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyVersionsResponse)
    Q_DISABLE_COPY(ListPolicyVersionsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
