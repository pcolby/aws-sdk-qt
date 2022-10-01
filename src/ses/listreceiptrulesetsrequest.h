// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTRULESETSREQUEST_H
#define QTAWS_LISTRECEIPTRULESETSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class ListReceiptRuleSetsRequestPrivate;

class QTAWSSES_EXPORT ListReceiptRuleSetsRequest : public SesRequest {

public:
    ListReceiptRuleSetsRequest(const ListReceiptRuleSetsRequest &other);
    ListReceiptRuleSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceiptRuleSetsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
