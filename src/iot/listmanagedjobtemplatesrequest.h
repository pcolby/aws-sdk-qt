// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDJOBTEMPLATESREQUEST_H
#define QTAWS_LISTMANAGEDJOBTEMPLATESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListManagedJobTemplatesRequestPrivate;

class QTAWSIOT_EXPORT ListManagedJobTemplatesRequest : public IoTRequest {

public:
    ListManagedJobTemplatesRequest(const ListManagedJobTemplatesRequest &other);
    ListManagedJobTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedJobTemplatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
