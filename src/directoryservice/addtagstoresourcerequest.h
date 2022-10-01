// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCEREQUEST_H
#define QTAWS_ADDTAGSTORESOURCEREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class AddTagsToResourceRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT AddTagsToResourceRequest : public DirectoryServiceRequest {

public:
    AddTagsToResourceRequest(const AddTagsToResourceRequest &other);
    AddTagsToResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToResourceRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
