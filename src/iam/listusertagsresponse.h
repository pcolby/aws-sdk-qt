// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERTAGSRESPONSE_H
#define QTAWS_LISTUSERTAGSRESPONSE_H

#include "iamresponse.h"
#include "listusertagsrequest.h"

namespace QtAws {
namespace Iam {

class ListUserTagsResponsePrivate;

class QTAWSIAM_EXPORT ListUserTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListUserTagsResponse(const ListUserTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserTagsResponse)
    Q_DISABLE_COPY(ListUserTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
