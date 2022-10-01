// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCERESPONSE_H
#define QTAWS_GETRESOURCERESPONSE_H

#include "cloudcontrolresponse.h"
#include "getresourcerequest.h"

namespace QtAws {
namespace CloudControl {

class GetResourceResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT GetResourceResponse : public CloudControlResponse {
    Q_OBJECT

public:
    GetResourceResponse(const GetResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceResponse)
    Q_DISABLE_COPY(GetResourceResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
