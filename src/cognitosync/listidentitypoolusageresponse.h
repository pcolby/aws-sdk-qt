// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLUSAGERESPONSE_H
#define QTAWS_LISTIDENTITYPOOLUSAGERESPONSE_H

#include "cognitosyncresponse.h"
#include "listidentitypoolusagerequest.h"

namespace QtAws {
namespace CognitoSync {

class ListIdentityPoolUsageResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT ListIdentityPoolUsageResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    ListIdentityPoolUsageResponse(const ListIdentityPoolUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityPoolUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityPoolUsageResponse)
    Q_DISABLE_COPY(ListIdentityPoolUsageResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
