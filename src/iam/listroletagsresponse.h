// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLETAGSRESPONSE_H
#define QTAWS_LISTROLETAGSRESPONSE_H

#include "iamresponse.h"
#include "listroletagsrequest.h"

namespace QtAws {
namespace Iam {

class ListRoleTagsResponsePrivate;

class QTAWSIAM_EXPORT ListRoleTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListRoleTagsResponse(const ListRoleTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoleTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoleTagsResponse)
    Q_DISABLE_COPY(ListRoleTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
