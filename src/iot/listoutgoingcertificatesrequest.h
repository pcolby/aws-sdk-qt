// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGCERTIFICATESREQUEST_H
#define QTAWS_LISTOUTGOINGCERTIFICATESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListOutgoingCertificatesRequestPrivate;

class QTAWSIOT_EXPORT ListOutgoingCertificatesRequest : public IoTRequest {

public:
    ListOutgoingCertificatesRequest(const ListOutgoingCertificatesRequest &other);
    ListOutgoingCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOutgoingCertificatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
