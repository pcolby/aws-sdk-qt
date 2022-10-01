// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERCENTILESREQUEST_H
#define QTAWS_GETPERCENTILESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetPercentilesRequestPrivate;

class QTAWSIOT_EXPORT GetPercentilesRequest : public IoTRequest {

public:
    GetPercentilesRequest(const GetPercentilesRequest &other);
    GetPercentilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPercentilesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
