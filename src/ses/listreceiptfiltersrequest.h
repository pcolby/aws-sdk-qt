// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTFILTERSREQUEST_H
#define QTAWS_LISTRECEIPTFILTERSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class ListReceiptFiltersRequestPrivate;

class QTAWSSES_EXPORT ListReceiptFiltersRequest : public SesRequest {

public:
    ListReceiptFiltersRequest(const ListReceiptFiltersRequest &other);
    ListReceiptFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceiptFiltersRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
