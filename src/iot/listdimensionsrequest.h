// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIMENSIONSREQUEST_H
#define QTAWS_LISTDIMENSIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListDimensionsRequestPrivate;

class QTAWSIOT_EXPORT ListDimensionsRequest : public IoTRequest {

public:
    ListDimensionsRequest(const ListDimensionsRequest &other);
    ListDimensionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDimensionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
