// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESRESPONSE_H
#define QTAWS_LISTRESOURCESRESPONSE_H

#include "codestarresponse.h"
#include "listresourcesrequest.h"

namespace QtAws {
namespace CodeStar {

class ListResourcesResponsePrivate;

class QTAWSCODESTAR_EXPORT ListResourcesResponse : public CodeStarResponse {
    Q_OBJECT

public:
    ListResourcesResponse(const ListResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesResponse)
    Q_DISABLE_COPY(ListResourcesResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
