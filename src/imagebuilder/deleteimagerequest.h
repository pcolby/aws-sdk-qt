// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEREQUEST_H
#define QTAWS_DELETEIMAGEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImageRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteImageRequest : public ImageBuilderRequest {

public:
    DeleteImageRequest(const DeleteImageRequest &other);
    DeleteImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
