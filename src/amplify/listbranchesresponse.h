// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBRANCHESRESPONSE_H
#define QTAWS_LISTBRANCHESRESPONSE_H

#include "amplifyresponse.h"
#include "listbranchesrequest.h"

namespace QtAws {
namespace Amplify {

class ListBranchesResponsePrivate;

class QTAWSAMPLIFY_EXPORT ListBranchesResponse : public AmplifyResponse {
    Q_OBJECT

public:
    ListBranchesResponse(const ListBranchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBranchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBranchesResponse)
    Q_DISABLE_COPY(ListBranchesResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
