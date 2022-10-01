// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTBUILDVERSIONSREQUEST_H
#define QTAWS_LISTCOMPONENTBUILDVERSIONSREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListComponentBuildVersionsRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListComponentBuildVersionsRequest : public ImageBuilderRequest {

public:
    ListComponentBuildVersionsRequest(const ListComponentBuildVersionsRequest &other);
    ListComponentBuildVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentBuildVersionsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
