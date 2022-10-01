// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCERESPONSE_H
#define QTAWS_UPDATERESOURCERESPONSE_H

#include "cloudcontrolresponse.h"
#include "updateresourcerequest.h"

namespace QtAws {
namespace CloudControl {

class UpdateResourceResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT UpdateResourceResponse : public CloudControlResponse {
    Q_OBJECT

public:
    UpdateResourceResponse(const UpdateResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceResponse)
    Q_DISABLE_COPY(UpdateResourceResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
