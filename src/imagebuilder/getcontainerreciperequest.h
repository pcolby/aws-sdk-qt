// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPEREQUEST_H
#define QTAWS_GETCONTAINERRECIPEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipeRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetContainerRecipeRequest : public ImageBuilderRequest {

public:
    GetContainerRecipeRequest(const GetContainerRecipeRequest &other);
    GetContainerRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
