// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCERESPONSE_H
#define QTAWS_CREATERESOURCERESPONSE_H

#include "cloudcontrolresponse.h"
#include "createresourcerequest.h"

namespace QtAws {
namespace CloudControl {

class CreateResourceResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT CreateResourceResponse : public CloudControlResponse {
    Q_OBJECT

public:
    CreateResourceResponse(const CreateResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceResponse)
    Q_DISABLE_COPY(CreateResourceResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
