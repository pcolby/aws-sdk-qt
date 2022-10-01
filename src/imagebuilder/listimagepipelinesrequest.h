// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINESREQUEST_H
#define QTAWS_LISTIMAGEPIPELINESREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelinesRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImagePipelinesRequest : public ImageBuilderRequest {

public:
    ListImagePipelinesRequest(const ListImagePipelinesRequest &other);
    ListImagePipelinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagePipelinesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
