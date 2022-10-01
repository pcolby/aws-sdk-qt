// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERRECIPEREQUEST_H
#define QTAWS_DELETECONTAINERRECIPEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteContainerRecipeRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteContainerRecipeRequest : public ImageBuilderRequest {

public:
    DeleteContainerRecipeRequest(const DeleteContainerRecipeRequest &other);
    DeleteContainerRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
