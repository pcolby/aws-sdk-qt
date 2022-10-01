// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVEVIOLATIONSREQUEST_H
#define QTAWS_LISTACTIVEVIOLATIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListActiveViolationsRequestPrivate;

class QTAWSIOT_EXPORT ListActiveViolationsRequest : public IoTRequest {

public:
    ListActiveViolationsRequest(const ListActiveViolationsRequest &other);
    ListActiveViolationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActiveViolationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
