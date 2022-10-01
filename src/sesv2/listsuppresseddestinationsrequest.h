// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPRESSEDDESTINATIONSREQUEST_H
#define QTAWS_LISTSUPPRESSEDDESTINATIONSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListSuppressedDestinationsRequestPrivate;

class QTAWSSESV2_EXPORT ListSuppressedDestinationsRequest : public SESv2Request {

public:
    ListSuppressedDestinationsRequest(const ListSuppressedDestinationsRequest &other);
    ListSuppressedDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuppressedDestinationsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
