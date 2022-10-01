// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYTAGSRESPONSE_H
#define QTAWS_LISTPOLICYTAGSRESPONSE_H

#include "iamresponse.h"
#include "listpolicytagsrequest.h"

namespace QtAws {
namespace Iam {

class ListPolicyTagsResponsePrivate;

class QTAWSIAM_EXPORT ListPolicyTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListPolicyTagsResponse(const ListPolicyTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPolicyTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyTagsResponse)
    Q_DISABLE_COPY(ListPolicyTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
