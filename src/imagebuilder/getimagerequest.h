// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEREQUEST_H
#define QTAWS_GETIMAGEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImageRequest : public ImageBuilderRequest {

public:
    GetImageRequest(const GetImageRequest &other);
    GetImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
