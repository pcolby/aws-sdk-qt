// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCEREQUEST_H
#define QTAWS_ADDTAGSTORESOURCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class AddTagsToResourceRequestPrivate;

class QTAWSRDS_EXPORT AddTagsToResourceRequest : public RdsRequest {

public:
    AddTagsToResourceRequest(const AddTagsToResourceRequest &other);
    AddTagsToResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToResourceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
