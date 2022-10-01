// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSREQUEST_H
#define QTAWS_LISTJOBSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListJobsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListJobsRequest : public DeviceFarmRequest {

public:
    ListJobsRequest(const ListJobsRequest &other);
    ListJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
