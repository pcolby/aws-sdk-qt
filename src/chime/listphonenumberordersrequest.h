// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERORDERSREQUEST_H
#define QTAWS_LISTPHONENUMBERORDERSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListPhoneNumberOrdersRequestPrivate;

class QTAWSCHIME_EXPORT ListPhoneNumberOrdersRequest : public ChimeRequest {

public:
    ListPhoneNumberOrdersRequest(const ListPhoneNumberOrdersRequest &other);
    ListPhoneNumberOrdersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumberOrdersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
