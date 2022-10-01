// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREFETCHSCHEDULESREQUEST_H
#define QTAWS_LISTPREFETCHSCHEDULESREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListPrefetchSchedulesRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT ListPrefetchSchedulesRequest : public MediaTailorRequest {

public:
    ListPrefetchSchedulesRequest(const ListPrefetchSchedulesRequest &other);
    ListPrefetchSchedulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrefetchSchedulesRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
