// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGERECIPEREQUEST_H
#define QTAWS_DELETEIMAGERECIPEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImageRecipeRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteImageRecipeRequest : public ImageBuilderRequest {

public:
    DeleteImageRecipeRequest(const DeleteImageRecipeRequest &other);
    DeleteImageRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
