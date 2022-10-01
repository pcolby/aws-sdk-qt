// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSREQUEST_H
#define QTAWS_LISTTHINGSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingsRequestPrivate;

class QTAWSIOT_EXPORT ListThingsRequest : public IoTRequest {

public:
    ListThingsRequest(const ListThingsRequest &other);
    ListThingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
