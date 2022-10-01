// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDUSERPOLICIESRESPONSE_H
#define QTAWS_LISTATTACHEDUSERPOLICIESRESPONSE_H

#include "iamresponse.h"
#include "listattacheduserpoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedUserPoliciesResponsePrivate;

class QTAWSIAM_EXPORT ListAttachedUserPoliciesResponse : public IamResponse {
    Q_OBJECT

public:
    ListAttachedUserPoliciesResponse(const ListAttachedUserPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttachedUserPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedUserPoliciesResponse)
    Q_DISABLE_COPY(ListAttachedUserPoliciesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
