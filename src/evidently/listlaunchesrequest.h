// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHESREQUEST_H
#define QTAWS_LISTLAUNCHESREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class ListLaunchesRequestPrivate;

class QTAWSEVIDENTLY_EXPORT ListLaunchesRequest : public EvidentlyRequest {

public:
    ListLaunchesRequest(const ListLaunchesRequest &other);
    ListLaunchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchesRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
