// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORPOLICYRESPONSE_H
#define QTAWS_LISTTARGETSFORPOLICYRESPONSE_H

#include "iotresponse.h"
#include "listtargetsforpolicyrequest.h"

namespace QtAws {
namespace IoT {

class ListTargetsForPolicyResponsePrivate;

class QTAWSIOT_EXPORT ListTargetsForPolicyResponse : public IoTResponse {
    Q_OBJECT

public:
    ListTargetsForPolicyResponse(const ListTargetsForPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetsForPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsForPolicyResponse)
    Q_DISABLE_COPY(ListTargetsForPolicyResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
