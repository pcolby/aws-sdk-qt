// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSREQUEST_H
#define QTAWS_LISTIMPORTSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListImportsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListImportsRequest : public CloudFormationRequest {

public:
    ListImportsRequest(const ListImportsRequest &other);
    ListImportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
