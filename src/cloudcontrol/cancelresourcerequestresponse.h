// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESOURCEREQUESTRESPONSE_H
#define QTAWS_CANCELRESOURCEREQUESTRESPONSE_H

#include "cloudcontrolresponse.h"
#include "cancelresourcerequestrequest.h"

namespace QtAws {
namespace CloudControl {

class CancelResourceRequestResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT CancelResourceRequestResponse : public CloudControlResponse {
    Q_OBJECT

public:
    CancelResourceRequestResponse(const CancelResourceRequestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelResourceRequestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelResourceRequestResponse)
    Q_DISABLE_COPY(CancelResourceRequestResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
