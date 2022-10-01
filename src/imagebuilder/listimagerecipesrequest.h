// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGERECIPESREQUEST_H
#define QTAWS_LISTIMAGERECIPESREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageRecipesRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImageRecipesRequest : public ImageBuilderRequest {

public:
    ListImageRecipesRequest(const ListImageRecipesRequest &other);
    ListImageRecipesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImageRecipesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
