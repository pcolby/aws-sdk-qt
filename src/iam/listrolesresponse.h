// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLESRESPONSE_H
#define QTAWS_LISTROLESRESPONSE_H

#include "iamresponse.h"
#include "listrolesrequest.h"

namespace QtAws {
namespace Iam {

class ListRolesResponsePrivate;

class QTAWSIAM_EXPORT ListRolesResponse : public IamResponse {
    Q_OBJECT

public:
    ListRolesResponse(const ListRolesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRolesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRolesResponse)
    Q_DISABLE_COPY(ListRolesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
