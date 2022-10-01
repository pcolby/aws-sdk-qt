// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZECLUSTERRESPONSE_H
#define QTAWS_INITIALIZECLUSTERRESPONSE_H

#include "cloudhsmv2response.h"
#include "initializeclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class InitializeClusterResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT InitializeClusterResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    InitializeClusterResponse(const InitializeClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitializeClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitializeClusterResponse)
    Q_DISABLE_COPY(InitializeClusterResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
