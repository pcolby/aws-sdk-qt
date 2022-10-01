// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMDATAIDENTIFIERSREQUEST_H
#define QTAWS_LISTCUSTOMDATAIDENTIFIERSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListCustomDataIdentifiersRequestPrivate;

class QTAWSMACIE2_EXPORT ListCustomDataIdentifiersRequest : public Macie2Request {

public:
    ListCustomDataIdentifiersRequest(const ListCustomDataIdentifiersRequest &other);
    ListCustomDataIdentifiersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomDataIdentifiersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
