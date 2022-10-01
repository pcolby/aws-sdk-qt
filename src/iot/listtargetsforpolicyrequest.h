// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORPOLICYREQUEST_H
#define QTAWS_LISTTARGETSFORPOLICYREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListTargetsForPolicyRequestPrivate;

class QTAWSIOT_EXPORT ListTargetsForPolicyRequest : public IoTRequest {

public:
    ListTargetsForPolicyRequest(const ListTargetsForPolicyRequest &other);
    ListTargetsForPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsForPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
