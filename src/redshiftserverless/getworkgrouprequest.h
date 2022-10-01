// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPREQUEST_H
#define QTAWS_GETWORKGROUPREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetWorkgroupRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetWorkgroupRequest : public RedshiftServerlessRequest {

public:
    GetWorkgroupRequest(const GetWorkgroupRequest &other);
    GetWorkgroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
