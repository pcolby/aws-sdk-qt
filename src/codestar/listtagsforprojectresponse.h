// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORPROJECTRESPONSE_H
#define QTAWS_LISTTAGSFORPROJECTRESPONSE_H

#include "codestarresponse.h"
#include "listtagsforprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class ListTagsForProjectResponsePrivate;

class QTAWSCODESTAR_EXPORT ListTagsForProjectResponse : public CodeStarResponse {
    Q_OBJECT

public:
    ListTagsForProjectResponse(const ListTagsForProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForProjectResponse)
    Q_DISABLE_COPY(ListTagsForProjectResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
