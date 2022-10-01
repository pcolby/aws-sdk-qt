// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDENVIRONMENTSRESPONSE_H
#define QTAWS_LISTBACKENDENVIRONMENTSRESPONSE_H

#include "amplifyresponse.h"
#include "listbackendenvironmentsrequest.h"

namespace QtAws {
namespace Amplify {

class ListBackendEnvironmentsResponsePrivate;

class QTAWSAMPLIFY_EXPORT ListBackendEnvironmentsResponse : public AmplifyResponse {
    Q_OBJECT

public:
    ListBackendEnvironmentsResponse(const ListBackendEnvironmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackendEnvironmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackendEnvironmentsResponse)
    Q_DISABLE_COPY(ListBackendEnvironmentsResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
