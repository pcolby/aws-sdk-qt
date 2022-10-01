// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERRECIPESREQUEST_H
#define QTAWS_LISTCONTAINERRECIPESREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListContainerRecipesRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListContainerRecipesRequest : public ImageBuilderRequest {

public:
    ListContainerRecipesRequest(const ListContainerRecipesRequest &other);
    ListContainerRecipesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContainerRecipesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
