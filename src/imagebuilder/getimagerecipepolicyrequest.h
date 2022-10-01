// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPEPOLICYREQUEST_H
#define QTAWS_GETIMAGERECIPEPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipePolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImageRecipePolicyRequest : public ImageBuilderRequest {

public:
    GetImageRecipePolicyRequest(const GetImageRecipePolicyRequest &other);
    GetImageRecipePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImageRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
