// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPREQUEST_H
#define QTAWS_DELETEWORKGROUPREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteWorkgroupRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteWorkgroupRequest : public RedshiftServerlessRequest {

public:
    DeleteWorkgroupRequest(const DeleteWorkgroupRequest &other);
    DeleteWorkgroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
