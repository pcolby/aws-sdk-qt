// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSREQUEST_H
#define QTAWS_LISTWORKGROUPSREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListWorkGroupsRequestPrivate;

class QTAWSATHENA_EXPORT ListWorkGroupsRequest : public AthenaRequest {

public:
    ListWorkGroupsRequest(const ListWorkGroupsRequest &other);
    ListWorkGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkGroupsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
