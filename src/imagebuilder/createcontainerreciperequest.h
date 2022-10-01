// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERRECIPEREQUEST_H
#define QTAWS_CREATECONTAINERRECIPEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateContainerRecipeRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateContainerRecipeRequest : public ImageBuilderRequest {

public:
    CreateContainerRecipeRequest(const CreateContainerRecipeRequest &other);
    CreateContainerRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
