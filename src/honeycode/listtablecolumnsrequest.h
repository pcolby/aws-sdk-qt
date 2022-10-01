// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLECOLUMNSREQUEST_H
#define QTAWS_LISTTABLECOLUMNSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class ListTableColumnsRequestPrivate;

class QTAWSHONEYCODE_EXPORT ListTableColumnsRequest : public HoneycodeRequest {

public:
    ListTableColumnsRequest(const ListTableColumnsRequest &other);
    ListTableColumnsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableColumnsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
