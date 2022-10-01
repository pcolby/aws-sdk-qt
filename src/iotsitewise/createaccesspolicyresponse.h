// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOLICYRESPONSE_H
#define QTAWS_CREATEACCESSPOLICYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAccessPolicyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreateAccessPolicyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreateAccessPolicyResponse(const CreateAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPolicyResponse)
    Q_DISABLE_COPY(CreateAccessPolicyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
