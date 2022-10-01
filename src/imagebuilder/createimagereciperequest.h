// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERECIPEREQUEST_H
#define QTAWS_CREATEIMAGERECIPEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageRecipeRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateImageRecipeRequest : public ImageBuilderRequest {

public:
    CreateImageRecipeRequest(const CreateImageRecipeRequest &other);
    CreateImageRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
