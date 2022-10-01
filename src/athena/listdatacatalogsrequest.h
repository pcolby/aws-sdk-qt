// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACATALOGSREQUEST_H
#define QTAWS_LISTDATACATALOGSREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListDataCatalogsRequestPrivate;

class QTAWSATHENA_EXPORT ListDataCatalogsRequest : public AthenaRequest {

public:
    ListDataCatalogsRequest(const ListDataCatalogsRequest &other);
    ListDataCatalogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataCatalogsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
