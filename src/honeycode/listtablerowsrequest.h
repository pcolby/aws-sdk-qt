// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEROWSREQUEST_H
#define QTAWS_LISTTABLEROWSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class ListTableRowsRequestPrivate;

class QTAWSHONEYCODE_EXPORT ListTableRowsRequest : public HoneycodeRequest {

public:
    ListTableRowsRequest(const ListTableRowsRequest &other);
    ListTableRowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
