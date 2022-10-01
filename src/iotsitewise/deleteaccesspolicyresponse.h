// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOLICYRESPONSE_H
#define QTAWS_DELETEACCESSPOLICYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "deleteaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAccessPolicyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteAccessPolicyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DeleteAccessPolicyResponse(const DeleteAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPolicyResponse)
    Q_DISABLE_COPY(DeleteAccessPolicyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
