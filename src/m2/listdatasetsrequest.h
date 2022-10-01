// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_H
#define QTAWS_LISTDATASETSREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class ListDataSetsRequestPrivate;

class QTAWSM2_EXPORT ListDataSetsRequest : public M2Request {

public:
    ListDataSetsRequest(const ListDataSetsRequest &other);
    ListDataSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSetsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
