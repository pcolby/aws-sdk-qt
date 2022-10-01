// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCEREQUEST_H
#define QTAWS_ADDTAGSTORESOURCEREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class AddTagsToResourceRequestPrivate;

class QTAWSNEPTUNE_EXPORT AddTagsToResourceRequest : public NeptuneRequest {

public:
    AddTagsToResourceRequest(const AddTagsToResourceRequest &other);
    AddTagsToResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToResourceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
