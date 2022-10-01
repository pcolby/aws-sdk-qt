// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPREQUEST_H
#define QTAWS_CREATEWORKGROUPREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateWorkgroupRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateWorkgroupRequest : public RedshiftServerlessRequest {

public:
    CreateWorkgroupRequest(const CreateWorkgroupRequest &other);
    CreateWorkgroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkgroupRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
