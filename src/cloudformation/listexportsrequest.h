// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPORTSREQUEST_H
#define QTAWS_LISTEXPORTSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListExportsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListExportsRequest : public CloudFormationRequest {

public:
    ListExportsRequest(const ListExportsRequest &other);
    ListExportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExportsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
