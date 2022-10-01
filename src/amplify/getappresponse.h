// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPRESPONSE_H
#define QTAWS_GETAPPRESPONSE_H

#include "amplifyresponse.h"
#include "getapprequest.h"

namespace QtAws {
namespace Amplify {

class GetAppResponsePrivate;

class QTAWSAMPLIFY_EXPORT GetAppResponse : public AmplifyResponse {
    Q_OBJECT

public:
    GetAppResponse(const GetAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppResponse)
    Q_DISABLE_COPY(GetAppResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
