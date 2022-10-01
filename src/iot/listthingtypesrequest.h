// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGTYPESREQUEST_H
#define QTAWS_LISTTHINGTYPESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingTypesRequestPrivate;

class QTAWSIOT_EXPORT ListThingTypesRequest : public IoTRequest {

public:
    ListThingTypesRequest(const ListThingTypesRequest &other);
    ListThingTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingTypesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
