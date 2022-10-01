// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEBUILDVERSIONSREQUEST_H
#define QTAWS_LISTIMAGEBUILDVERSIONSREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageBuildVersionsRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImageBuildVersionsRequest : public ImageBuilderRequest {

public:
    ListImageBuildVersionsRequest(const ListImageBuildVersionsRequest &other);
    ListImageBuildVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImageBuildVersionsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
