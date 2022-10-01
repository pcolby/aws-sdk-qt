// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSPOLICYRESPONSE_H
#define QTAWS_UPDATEACCESSPOLICYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updateaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAccessPolicyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAccessPolicyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateAccessPolicyResponse(const UpdateAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessPolicyResponse)
    Q_DISABLE_COPY(UpdateAccessPolicyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
