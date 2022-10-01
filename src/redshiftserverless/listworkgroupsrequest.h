// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSREQUEST_H
#define QTAWS_LISTWORKGROUPSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListWorkgroupsRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListWorkgroupsRequest : public RedshiftServerlessRequest {

public:
    ListWorkgroupsRequest(const ListWorkgroupsRequest &other);
    ListWorkgroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkgroupsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
